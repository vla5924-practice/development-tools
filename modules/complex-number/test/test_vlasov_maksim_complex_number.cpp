// Copyright 2021 Vlasov Maksim

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Vlasov_Maksim_ComplexNumberTest, can_create_zero_by_default) {
    double re = 0.0;
    double im = 0.0;

    ComplexNumber c;

    EXPECT_EQ(re, c.getRe());
    EXPECT_EQ(im, c.getIm());
}

TEST(Vlasov_Maksim_ComplexNumberTest, can_be_initialized) {
    double re = 1.0;
    double im = 2.0;

    ComplexNumber c(re, im);

    EXPECT_EQ(re, c.getRe());
    EXPECT_EQ(im, c.getIm());
}

TEST(Vlasov_Maksim_ComplexNumberTest, can_be_copied) {
    double re = 1.0;
    double im = 2.0;

    ComplexNumber c(re, im);
    ComplexNumber c_copy(c);

    EXPECT_EQ(c.getRe(), c_copy.getRe());
    EXPECT_EQ(c.getIm(), c_copy.getIm());
}

TEST(Vlasov_Maksim_ComplexNumberTest, can_be_copy_assigned) {
    double re = 1.0;
    double im = 2.0;

    ComplexNumber c(re, im);
    ComplexNumber c_copy = c;

    EXPECT_EQ(c.getRe(), c_copy.getRe());
    EXPECT_EQ(c.getIm(), c_copy.getIm());
}

TEST(Vlasov_Maksim_ComplexNumberTest, can_set_real_part) {
    double re = 1.0;

    ComplexNumber c;
    c.setRe(re);

    EXPECT_EQ(re, c.getRe());
}

TEST(Vlasov_Maksim_ComplexNumberTest, can_set_imaginary_part) {
    double im = 2.0;

    ComplexNumber c;
    c.setIm(im);

    EXPECT_EQ(im, c.getIm());
}
