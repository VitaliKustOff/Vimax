#include "vimax/core/module_registry.hpp"


namespace vimax {


void ModuleRegistry::initialize()
{
}


void ModuleRegistry::register_module(
    std::shared_ptr<Module> module
)
{
    modules_[module->name()] = module;
}


std::shared_ptr<Module> ModuleRegistry::find(
    const std::string& name
)
{
    auto it = modules_.find(name);

    if (it == modules_.end())
    {
        return nullptr;
    }

    return it->second;
}


}