#include "gtest/gtest.h"
#include "test.h"

TEST(testsSRC, testH)
{
    test t;
    t.printlol();
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}