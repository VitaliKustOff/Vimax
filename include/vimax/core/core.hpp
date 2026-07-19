#pragma once
#include "vimax/core/interfaces.hpp"
#include "vimax/core/module_registry.hpp"
#include <memory>
namespace vimax {class Core{public:Core(std::shared_ptr<IIntentResolver>,std::shared_ptr<IPolicyEngine>,std::shared_ptr<IAuditLog>);void register_module(std::shared_ptr<IModule>);CoreResponse handle(const UserMessage&,bool confirmed_by_user=false,bool confirmed_locally=false);private:std::shared_ptr<IIntentResolver> resolver_;std::shared_ptr<IPolicyEngine> policy_;std::shared_ptr<IAuditLog> audit_;ModuleRegistry registry_;};}
