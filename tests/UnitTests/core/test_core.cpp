#include "gtest/gtest.h"
#include "core/bar.h"

TEST(CoreTests, test_bar) {
    ASSERT_EQ(50, bar());
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
