#include "vimax/core/core.hpp"

namespace vimax {

Core::Core() = default;

Core::~Core() = default;

void Core::initialize()
{
    moduleRegistry.initialize();
    policyEngine.initialize();
    auditLog.initialize();
}

}