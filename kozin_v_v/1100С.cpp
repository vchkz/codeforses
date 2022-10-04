#include <cmath>
#include <iostream>
#include <numbers>


int main() {
    int n, r;
    std::cin >> n >> r;
    double result;

    result = r * sin(std::numbers::pi / n) / (1 - sin(std::numbers::pi / n));


    std::cout.setf(std::ios::fixed);
    std::cout.precision(7);
    std::cout << result;


}