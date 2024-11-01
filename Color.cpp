#include "Color.hpp"

Color::Color() = default;

Color::Color(double red, double green, double blue)
    : r{red}, g{green}, b{blue} {}

double Color::red() const {
    return r;
}

std::ifstream& operator>>(std::ifstream& input, Color& obj)
{
    input >> obj.r >> obj.g >> obj.b;

    return input;
}


double Color::green() const {
    return g;
}

double Color::blue() const {
    return b;
}
