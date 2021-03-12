// Copyright 2021 Vlasov Maksim

#include <cmath>
#include <gtest/gtest.h>

#include "include/vector.h"

TEST(VectorTest, can_create_default) {
    ASSERT_NO_THROW(Vector v);
}

TEST(VectorTest, can_create_with_coords) {
    ASSERT_NO_THROW(Vector v(1, 2, 3));
}

TEST(VectorTest, can_create_zero_by_default_and_get) {
    Vector v;

    ASSERT_EQ(0, v.x());
    ASSERT_EQ(0, v.y());
    ASSERT_EQ(0, v.z());
}

TEST(VectorTest, can_create_with_coords_and_get) {
    double x = 1;
    double y = 2;
    double z = 3;
    
    Vector v{x, y, z};

    ASSERT_EQ(x, v.x());
    ASSERT_EQ(y, v.y());
    ASSERT_EQ(z, v.z());
}

TEST(VectorTest, can_be_copied) {
    double x = 1;
    double y = 2;
    double z = 3;
    
    Vector v{x, y, z};
    Vector v_copy{v};

    ASSERT_EQ(x, v_copy.x());
    ASSERT_EQ(y, v_copy.y());
    ASSERT_EQ(z, v_copy.z());
}

TEST(VectorTest, can_be_moved) {
    double x = 1;
    double y = 2;
    double z = 3;
    
    Vector v{x, y, z};
    Vector v_moved{std::move(v)};

    ASSERT_EQ(x, v_moved.x());
    ASSERT_EQ(y, v_moved.y());
    ASSERT_EQ(z, v_moved.z());
}

TEST(VectorTest, can_be_copy_assigned) {
    double x = 1;
    double y = 2;
    double z = 3;
    
    Vector v{x, y, z};
    Vector v_copy = v;

    ASSERT_EQ(x, v_copy.x());
    ASSERT_EQ(y, v_copy.y());
    ASSERT_EQ(z, v_copy.z());
}

TEST(VectorTest, can_be_move_assigned) {
    double x = 1;
    double y = 2;
    double z = 3;
    
    Vector v{x, y, z};
    Vector v_moved = std::move(v);

    ASSERT_EQ(x, v_moved.x());
    ASSERT_EQ(y, v_moved.y());
    ASSERT_EQ(z, v_moved.z());
}

TEST(VectorTest, can_set_x) {
    double x = 1;
    double x_ = 2;
    
    Vector v{x, 0, 0};
    v.setX(x_);

    ASSERT_EQ(x_, v.x());
}

TEST(VectorTest, can_set_y) {
    double y = 1;
    double y_ = 2;
    
    Vector v{0, y, 0};
    v.setY(y_);

    ASSERT_EQ(y_, v.y());
}

TEST(VectorTest, can_set_z) {
    double z = 1;
    double z_ = 2;
    
    Vector v{0, 0, z};
    v.setZ(z_);

    ASSERT_EQ(z_, v.z());
}

TEST(VectorTest, can_calculate_norm) {
    double x = 1;
    double y = -1;
    double z = 2;
    double norm = std::sqrt(6);
    
    Vector v{x, y, z};

    ASSERT_EQ(norm, v.norm());
}

TEST(VectorTest, can_calculate_dot) {
    double dot = 3 - 2 - 4;
    
    Vector v1{1, 2, -1};
    Vector v2{3, -1, 4};

    ASSERT_EQ(dot, v1.dot(v2));
}
