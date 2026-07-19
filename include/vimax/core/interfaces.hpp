#pragma once
#include "vimax/core/types.hpp"
#include <string>
#include <vector>
namespace vimax {
class IIntentResolver{public:virtual ~IIntentResolver()=default;virtual Intent resolve(const UserMessage&) const=0;};
class IModule{public:virtual ~IModule()=default;virtual std::string id() const=0;virtual std::string name() const=0;virtual std::vector<std::string> supported_intents() const=0;virtual WorkflowPlan build_plan(const Intent&) const=0;virtual ActionResult execute(const Action&)=0;};
class IPolicyEngine{public:virtual ~IPolicyEngine()=default;virtual Action evaluate(Action) const=0;virtual bool may_execute(const Action&,bool,bool) const=0;};
class IAuditLog{public:virtual ~IAuditLog()=default;virtual void record(const UserMessage&,const Intent&,const WorkflowPlan&,const std::vector<ActionResult>&)=0;};
}
