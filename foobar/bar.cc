#include "bar.h"

#include <string>

#include "absl/strings/str_cat.h"
#include "absl/strings/string_view.h"

namespace foobar {

std::string Bar(absl::string_view name) {
  std::string greeting = "Hello";
  if (name.size() >= 1) {
    absl::StrAppend(&greeting, ", ", name);
  }
  return greeting;
}

}  // namespace foobar
