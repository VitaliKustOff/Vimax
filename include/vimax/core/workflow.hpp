#pragma once

#include <string>
#include <vector>

namespace vimax {

struct WorkflowStep
{
    std::string action;
};


class Workflow
{
public:

    Workflow(std::string id);

    void add_step(const WorkflowStep& step);

    const std::string& id() const;

    const std::vector<WorkflowStep>& steps() const;


private:

    std::string id_;
    std::vector<WorkflowStep> steps_;
};

}