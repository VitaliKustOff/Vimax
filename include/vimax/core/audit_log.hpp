#pragma once

#include "vimax/core/types.hpp"

#include <filesystem>
#include <mutex>
#include <vector>

namespace vimax {

class JsonLinesAuditLog
{
public:

    explicit JsonLinesAuditLog(std::filesystem::path path);

    void record(
        const UserMessage& message,
        const Intent& intent,
        const WorkflowPlan& plan,
        const std::vector<ActionResult>& results
    );

private:

    std::filesystem::path path_;
    std::mutex mutex_;
};

}