#include "vimax/core/workflow_engine.hpp"

namespace vimax {

WorkflowEngine::WorkflowEngine(
    PolicyEngine& policy,
    JsonLinesAuditLog& audit
)
    : policy_(policy),
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