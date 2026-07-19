#pragma once
#include "vimax/core/interfaces.hpp"
#include <filesystem>
#include <mutex>
namespace vimax {class JsonLinesAuditLog final:public IAuditLog{public:explicit JsonLinesAuditLog(std::filesystem::path);void record(const UserMessage&,const Intent&,const WorkflowPlan&,const std::vector<ActionResult>&) override;private:std::filesystem::path path_;std::mutex mutex_;};}
