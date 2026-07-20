#pragma once

#include "vimax/core/workflow.hpp"
#include "vimax/core/policy_engine.hpp"
#include "vimax/core/module_registry.hpp"
#include "vimax/core/audit_log.hpp"


namespace vimax {

class WorkflowEngine
{
public:

    WorkflowEngine(
        PolicyEngine& policy,
        ModuleRegistry& registry,
        JsonLinesAuditLog& audit
    );


    bool execute(
        const Workflow& workflow
    );


private:

    PolicyEngine& policy_;
    ModuleRegistry& registry_;
    JsonLinesAuditLog& audit_;

};

}