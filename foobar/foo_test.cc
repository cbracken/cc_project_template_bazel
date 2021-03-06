#include "foo.h"

#include "gtest/gtest.h"

namespace foobar {
namespace {

TEST(Foo, IncrementsZero) { EXPECT_EQ(1, Foo(0)); }

TEST(Foo, IncrementsPositive) { EXPECT_EQ(2, Foo(1)); }

TEST(Foo, IncrementsNegative) { EXPECT_EQ(-1, Foo(-2)); }

}  // namespace
}  // namespace foobar
