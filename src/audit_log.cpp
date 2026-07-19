#include "vimax/core/audit_log.hpp"

#include <fstream>

namespace {

std::string escape_json(const std::string& value) {
    std::string out;
    for (const char c : value) {
        switch (c) {
            case '"': out += "\\\""; break;
            case '\\': out += "\\\\"; break;
            case '\n': out += "\\n"; break;
            case '\r': out += "\\r"; break;
            case '\t': out += "\\t"; break;
            default: out += c; break;
        }
    }
    return out;
}

} // namespace

namespace vimax {

JsonLinesAuditLog::JsonLinesAuditLog(std::filesystem::path path)
    : path_(std::move(path)) {}

void JsonLinesAuditLog::record(const UserMessage& message,
                               const Intent& intent,
                               const WorkflowPlan& plan,
                               const std::vector<ActionResult>& results) {
    std::lock_guard lock(mutex_);
    std::ofstream stream(path_, std::ios::app);
    if (!stream) {
        return;
    }

    stream << "{"
           << "\"user_id\":\"" << escape_json(message.user_id) << "\","
           << "\"text\":\"" << escape_json(message.text) << "\","
           << "\"intent\":\"" << escape_json(intent.name) << "\","
           << "\"confidence\":" << intent.confidence << ","
           << "\"plan\":\"" << escape_json(plan.id) << "\","
           << "\"result_count\":" << results.size()
           << "}\n";
}

} // namespace vimax
