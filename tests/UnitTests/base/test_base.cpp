#include "gtest/gtest.h"
#include "base/foo.h"

TEST(BaseTests, test_foo) {
    ASSERT_EQ(5, foo());
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
