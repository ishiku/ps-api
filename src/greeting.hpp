#pragma once

#include <string>
#include <string_view>

namespace ps_api {

enum class UserType { kFirstTime, kKnown };

std::string SayHelloTo(std::string_view name, UserType type);

}  // namespace ps_api