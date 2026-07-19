#pragma once
#include "vimax/core/interfaces.hpp"
namespace vimax {class SimpleIntentResolver final:public IIntentResolver{public:Intent resolve(const UserMessage&) const override;};}
