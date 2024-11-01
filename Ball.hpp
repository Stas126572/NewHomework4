#pragma once
#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"

class Ball {
    Velocity velocity;
    Point center;
    double radius;
    Color color;
    bool Colidable;
public:
    Ball() = default;
    inline Ball(const Velocity& velocity, const Point& center, double radius, const Color& color, bool isColidable=false): velocity(velocity), center(center), radius(radius), color(color), Colidable(isColidable) {};
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;
    bool isColidable() const;
};
