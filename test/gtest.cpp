#include "gtest/gtest.h"
#include "mylib.h"

// Test fixture for coo::string class
class mylibTest : public ::testing::Test
{
    protected:
        coo::string s1;
        coo::string s2;

        void SetUp() override
        {
            s1 = coo::string("Hello");
            s2 = coo::string("World");
        }
};

// Test the constructor and length method
TEST_F(mylibTest, ConstructorAndLength)
{
    EXPECT_EQ(s1.length(), 5);
    EXPECT_EQ(s2.length(), 5);
}

// Test the addition operator (+)
TEST_F(mylibTest, AdditionOperator)
{
    coo::string result = s1 + s2;
    const char* resultString = result.data();
    EXPECT_EQ(result.length(), 10);
    EXPECT_STREQ(resultString, "HelloWorld");
}

// Test the multiplication operator (*)
TEST_F(mylibTest, MultiplicationOperator)
{
    coo::string result = s1 * 3;
    const char* resultString = result.data();
    EXPECT_EQ(result.length(), 15);
    EXPECT_STREQ(resultString, "HelloHelloHello");
}

// Test the index operator ([])
TEST_F(mylibTest, IndexOperator)
{
    EXPECT_EQ(s1[0], 'H');
    EXPECT_EQ(s1[4], 'o');
}


int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}