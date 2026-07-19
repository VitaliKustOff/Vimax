#pragma once

#include "module_registry.hpp"
#include "policy_engine.hpp"
#include "audit_log.hpp"

namespace vimax {

class Core
{
public:
    Core();
    ~Core();

    void initialize();

private:
    ModuleRegistry moduleRegistry;
    PolicyEngine policyEngine;
    AuditLog auditLog;
};

}