#include "vimax/core/audit_log.hpp"
#include "vimax/core/core.hpp"
#include "vimax/core/policy_engine.hpp"
#include "vimax/core/simple_intent_resolver.hpp"
#include "vimax/modules/booking_module.hpp"
#include "vimax/modules/cheese_module.hpp"
#include <iostream>
#include <memory>
int main(){auto r=std::make_shared<vimax::SimpleIntentResolver>();auto p=std::make_shared<vimax::DefaultPolicyEngine>();auto a=std::make_shared<vimax::JsonLinesAuditLog>("vimax-audit.jsonl");vimax::Core c(r,p,a);c.register_module(std::make_shared<vimax::CheeseModule>());c.register_module(std::make_shared<vimax::BookingModule>());std::cout<<"Vimax Core 0.1.0-alpha\nЧем вы хотите заняться?\n> ";std::string in;std::getline(std::cin,in);auto out=c.handle({"local-user",in,"ru-RU",{}});std::cout<<out.message<<'\n';}
