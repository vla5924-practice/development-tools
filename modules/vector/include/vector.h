// Copyright 2021 Vlasov Maksim

#pragma once

class Vector {
    double m_x;
    double m_y;
    double m_z;

public:
    Vector();
    Vector(double x, double y, double z);
    Vector(const Vector &) = default;
    Vector(Vector &&) = default;
    ~Vector() = default;

    Vector &operator=(const Vector &) = default;
    Vector &operator=(Vector &&) = default;

    double x() const;
    double y() const;
    double z() const;

    void setX(double x);
    void setY(double y);
    void setZ(double z);

    double norm() const;
    double dot(const Vector &other) const;
    Vector operator*(const Vector &other) const;
    Vector normalize() const;
};
