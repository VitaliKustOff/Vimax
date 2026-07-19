#include "vimax/core/audit_log.hpp"
#include "vimax/core/core.hpp"
#include "vimax/core/policy_engine.hpp"
#include "vimax/core/simple_intent_resolver.hpp"
#include "vimax/modules/booking_module.hpp"
#include "vimax/modules/cheese_module.hpp"
#include <cassert>
#include <filesystem>
#include <memory>
int main(){auto f=std::filesystem::temp_directory_path()/"vimax-test.jsonl";std::filesystem::remove(f);auto r=std::make_shared<vimax::SimpleIntentResolver>();auto p=std::make_shared<vimax::DefaultPolicyEngine>();auto a=std::make_shared<vimax::JsonLinesAuditLog>(f);vimax::Core c(r,p,a);c.register_module(std::make_shared<vimax::CheeseModule>());c.register_module(std::make_shared<vimax::BookingModule>());auto x=c.handle({"u1","Хочу сварить сыр Гауда","ru-RU",{}});assert(x.intent&&x.intent->name=="cheese.start_batch");assert(x.plan&&!x.plan->missing_fields.empty());auto y=c.handle({"u2","Запиши меня к мастеру Марине","ru-RU",{}});assert(y.intent&&y.intent->name=="booking.create");assert(std::filesystem::exists(f));std::filesystem::remove(f);}
