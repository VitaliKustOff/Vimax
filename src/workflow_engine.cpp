#include "vimax/core/workflow_engine.hpp"


namespace vimax {


WorkflowEngine::WorkflowEngine(
    PolicyEngine& policy,
    ModuleRegistry& registry,
    JsonLinesAuditLog& audit
)
    :
    policy_(policy),
    registry_(registry),
    audit_(audit)
{
}


bool WorkflowEngine::execute(
    const Workflow& workflow
)
{
    (void)workflow;

    return true;
}


}