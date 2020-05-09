#include "bar.h"

#include "gtest/gtest.h"

namespace foobar {
namespace {

TEST(Bar, HandlesEmptyString) { EXPECT_EQ("Hello", Bar("")); }

TEST(Bar, HandlesName) { EXPECT_EQ("Hello, Alice", Bar("Alice")); }

}  // namespace
}  // namespace foobar
