#include "vimax/core/module_registry.hpp"
#include <stdexcept>
namespace vimax {void ModuleRegistry::register_module(std::shared_ptr<IModule> m){if(!m)throw std::invalid_argument("module must not be null");for(const auto&i:m->supported_intents())by_intent_[i]=m;}std::shared_ptr<IModule> ModuleRegistry::find_for_intent(const std::string&i) const{auto it=by_intent_.find(i);return it==by_intent_.end()?nullptr:it->second;}}
