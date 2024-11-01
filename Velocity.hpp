#pragma once
#include "Point.hpp"
#include <cmath>

class Velocity {
  public:
    inline Velocity() = default;

   	friend std::ifstream& operator>>(std::ifstream&, Velocity&);



    // TODO: комментарии
    inline Velocity(double abs, double angle) {
        const double x = std::cos(angle);
        const double y = std::sin(angle);
        vec = Point{x, y} * abs;
    }

    inline Velocity(const Point& vector) {
        setVector(vector);
    }

    inline void setVector(const Point& vector) {
        vec = vector;
    }

    inline Point vector() const {
        return vec;
    }

  private:
    Point vec;
};

 
std::ifstream& operator>>(std::ifstream& input, Velocity& obj)
{
    input >> obj.vec;

    return input;
}
