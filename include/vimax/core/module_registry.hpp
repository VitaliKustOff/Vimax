#pragma once

#include "vimax/core/module.hpp"

#include <memory>
#include <string>
#include <unordered_map>


namespace vimax {

class ModuleRegistry
{
public:

    void initialize();


    void register_module(
        std::shared_ptr<Module> module
    );


    std::shared_ptr<Module> find(
        const std::string& name
    );


private:

    std::unordered_map<
        std::string,
        std::shared_ptr<Module>
    > modules_;

};

}