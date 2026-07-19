#pragma once
#include "vimax/core/interfaces.hpp"
#include <memory>
#include <unordered_map>
namespace vimax {class ModuleRegistry{public:void register_module(std::shared_ptr<IModule>);std::shared_ptr<IModule> find_for_intent(const std::string&) const;private:std::unordered_map<std::string,std::shared_ptr<IModule>> by_intent_;};}
