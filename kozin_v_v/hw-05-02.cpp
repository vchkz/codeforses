#include <iostream>
#include <cmath>

#define _USE_MATH_DEFINES


int main() {
    std::cout << "x | s(x) | f(x)" << std::endl;

    float x = 0;
    float b = 1;
    float c = 0.05;
    float e = 0.0001;


    while (x <= b) {

        int i = 1;

        float temp = 1;
        float s = 0;

        while (e < std::abs(temp)) {


            temp = std::pow(x, i) * sin(i * M_PI_4);



            s += temp;

            i++;

        }


        std::cout << x << " | " << s << " | " << x * std::sin(M_PI_4) / (1 - 2 * x * std::cos(M_PI_4)) << std::endl;
        x += c;


    }
std::cout << "4";

}