// Copyright 2021 Tashirev Ivan

#include <gtest/gtest.h>

#include <cmath>

#include "include/complex_number.h"

TEST(Tashirev_Ivan_ComplexNumberTest, Not_Equal) {
    double re1 = 10.15, im1 = 16.35;
    double re2 = 1.55, im2 = 20.44;

    ComplexNumber num1(re1, im1);
    ComplexNumber num2(re2, im2);

    bool res = num1 != num2;
    ASSERT_TRUE(res);
}

TEST(Tashirev_Ivan_ComplexNumberTest, Division) {
    double re1 = 1.1, im1 = 8.4;
    double re2 = 3.4, im2 = 6.3;

    ComplexNumber num1(re1, im1);
    ComplexNumber num2(re2, im2);

    ComplexNumber res((re1 * re2 + im1 * im2) / (re2 * re2 + im2 * im2),
        (im1 * re2 - re1 * im2) / (re2 * re2 + im2 * im2));

    ASSERT_EQ(res, num1 / num2);
}

TEST(Tashirev_Ivan_ComplexNumberTest, Substraction) {
    double re1 = 10.0, im1 = 2.0;
    double re2 = 9.0, im2 = 1.5;

    double reRes = 1.0;
    double imRes = 0.5;

    ComplexNumber num1(re1, im1);
    ComplexNumber num2(re2, im2);

    ComplexNumber res = num1 - num2;

    ASSERT_EQ(reRes, res.getRe());
    ASSERT_EQ(imRes, res.getIm());
}
