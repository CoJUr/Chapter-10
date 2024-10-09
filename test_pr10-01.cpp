// test_pr10-01.cpp
#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

// Declaration of the main function from pr10-01.cpp
int main();

class AddressTest : public ::testing::Test {
protected:
    std::stringstream buffer;
    std::streambuf* old;

    void SetUp() override {
        // Redirect std::cout to buffer
        old = std::cout.rdbuf(buffer.rdbuf());
    }

    void TearDown() override {
        // Restore std::cout
        std::cout.rdbuf(old);
    }
};

TEST_F(AddressTest, OutputFormat) {
    // Run the main function
    main();

    // Capture the output
    std::string output = buffer.str();

    // Verify the output format
    EXPECT_NE(output.find("Address of letter is:  "), std::string::npos);
    EXPECT_NE(output.find("Address of number is:  "), std::string::npos);
    EXPECT_NE(output.find("Address of amount is:  "), std::string::npos);
    EXPECT_NE(output.find("Address of profit is:  "), std::string::npos);
    EXPECT_NE(output.find("Address of ch is:      "), std::string::npos);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}