#pragma once
#include <map>
#include <optional>
#include <string>
#include <vector>
namespace vimax {
using Attributes=std::map<std::string,std::string>;
enum class RiskLevel{informational,low,medium,high,critical};
enum class ConfirmationMode{none,explicit_user_confirmation,local_physical_confirmation};
struct UserMessage{std::string user_id;std::string text;std::string locale{"ru-RU"};Attributes context;};
struct Intent{std::string name;double confidence{0.0};Attributes slots;std::string raw_text;};
struct Action{std::string module_id;std::string operation;Attributes arguments;RiskLevel risk{RiskLevel::informational};ConfirmationMode confirmation{ConfirmationMode::none};};
struct WorkflowPlan{std::string id;std::string title;std::vector<Action> actions;std::vector<std::string> missing_fields;bool executable{false};};
struct ActionResult{bool success{false};std::string message;Attributes data;};
struct CoreResponse{std::string message;std::optional<Intent> intent;std::optional<WorkflowPlan> plan;std::vector<ActionResult> results;};
}
