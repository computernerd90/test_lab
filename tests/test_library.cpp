#include <gtest/gtest.h>

#include "MyLibrary.h"

TEST(MyLibraryTests, SumTest) {
    EXPECT_EQ(MyLibrary::sum(2,4), 6);
}

TEST(MyLibraryTests, SubtractTest) {
    EXPECT_EQ(MyLibrary::subtract(4,3), 1);
}

TEST(MyLibraryTests, MultTest) {
    EXPECT_EQ(MyLibrary::mult(2,4), 8);
}
