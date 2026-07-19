#pragma once
#include "vimax/core/interfaces.hpp"
namespace vimax {class BookingModule final:public IModule{public:std::string id() const override;std::string name() const override;std::vector<std::string> supported_intents() const override;WorkflowPlan build_plan(const Intent&) const override;ActionResult execute(const Action&) override;};}
