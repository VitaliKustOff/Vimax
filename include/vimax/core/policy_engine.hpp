#pragma once
#include "vimax/core/interfaces.hpp"
namespace vimax {class DefaultPolicyEngine final:public IPolicyEngine{public:Action evaluate(Action) const override;bool may_execute(const Action&,bool,bool) const override;};}
