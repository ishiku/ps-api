#include <greeting.hpp>

#include <userver/utest/utest.hpp>

using ps_api::UserType;

UTEST(SayHelloTo, Basic) {
    EXPECT_EQ(ps_api::SayHelloTo("Developer", UserType::kFirstTime), "Hello, Developer!\n");
    EXPECT_EQ(ps_api::SayHelloTo({}, UserType::kFirstTime), "Hello, unknown user!\n");

    EXPECT_EQ(ps_api::SayHelloTo("Developer", UserType::kKnown), "Hi again, Developer!\n");
    EXPECT_EQ(ps_api::SayHelloTo({}, UserType::kKnown), "Hi again, unknown user!\n");
}