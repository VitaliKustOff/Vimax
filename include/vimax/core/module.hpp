#pragma once

#include "vimax/core/workflow.hpp"
#include "vimax/core/types.hpp"

#include <string>


namespace vimax {


class Module
{
public:

    virtual ~Module() = default;


    virtual std::string name() const = 0;


    virtual ActionResult execute(
        const WorkflowStep& step
    ) = 0;

};


}