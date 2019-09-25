
#include "gtest/gtest.h"
#include "fixed_vector.h"

TEST(Fixed_Vector, Copy_Constructor) {
    const int x = 2;
    const int y = 3;
    const int z = 4;

    FixedVector<int> vect1;
    vect1.push_back(x);
    vect1.push_back(y);

    FixedVector<int> vect2(vect1);
    vect2.pop_back();
    vect2.push_back(z);

    EXPECT_EQ(vect1.at(1), y);
}

TEST(Fixed_Vector, Push_Back) {
    const int x = 2;
    const int y = 3;

    FixedVector<int> vect1;
    vect1.push_back(x);
    vect1.push_back(y);

    EXPECT_EQ(vect1.get_size(), 2);
}

TEST(Fixed_Vector, Pop_Back) {
    const int x = 2;
    const int y = 3;

    FixedVector<int> vect1;
    vect1.push_back(x);
    vect1.push_back(y);
    vect1.pop_back();

    EXPECT_EQ(vect1.get_size(), 1);
}

TEST(Fixed_Vector, At) {
    const int x = 2;
    const int y = 3;

    FixedVector<int> vect1;
    vect1.push_back(x);
    vect1.push_back(y);

    EXPECT_EQ(vect1.at(0), x);
    EXPECT_EQ(vect1.at(1), y);
}

TEST(Fixed_Vector, Operator_Overloading) {
    const int x = 2;
    const int y = 3;

    FixedVector<int> vect1;
    vect1.push_back(x);
    vect1.push_back(y);

    EXPECT_EQ(vect1.at(0), x);
    EXPECT_EQ(vect1.at(1), y);
}

