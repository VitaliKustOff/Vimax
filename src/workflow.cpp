#include "vimax/core/workflow.hpp"


namespace vimax {


Workflow::Workflow(std::string id)
    : id_(std::move(id))
{
}


void Workflow::add_step(const WorkflowStep& step)
{
    steps_.push_back(step);
}


const std::string& Workflow::id() const
{
    return id_;
}


const std::vector<WorkflowStep>& Workflow::steps() const
{
    return steps_;
}


}