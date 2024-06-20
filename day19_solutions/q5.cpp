// Find 5 inbuilt functions in c++ like min or max etc and write a code around them.

#include <iostream>
#include <cmath> // for mathematical functions

int main() {
    double a = 10.5;
    double b = 5.3;

    // Finding minimum
    double min_value = std::fmin(a, b);
    std::cout << "Minimum of " << a << " and " << b << " is: " << min_value << std::endl;

    // Finding maximum
    double max_value = std::fmax(a, b);
    std::cout << "Maximum of " << a << " and " << b << " is: " << max_value << std::endl;

    double base = 2.0;
    double exponent = 3.0;

    // Computing power
    double power_result = std::pow(base, exponent);
    std::cout << base << " raised to the power of " << exponent << " is: " << power_result << std::endl;

    double x = 25.0;

    // Computing square root
    double sqrt_result = std::sqrt(x);
    std::cout << "Square root of " << x << " is: " << sqrt_result << std::endl;

    // Computing absolute value
    double negative_value = -10.5;
    double abs_result = std::fabs(negative_value);
    std::cout << "Absolute value of " << negative_value << " is: " << abs_result << std::endl;

    return 0;
}
