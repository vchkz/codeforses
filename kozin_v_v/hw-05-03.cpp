#include <iostream>
#include <cmath>

#define _USE_MATH_DEFINES

int factorial(int ii) {
    if (ii == 0) { return 1; }

    if (ii > 1) {
        return ii * factorial(ii - 1);
    } else { return ii; }
}


int main() {
    std::cout << "x | s(x) | f(x)" << std::endl;

    float x = 0;
    float b = 1;
    float c = 0.1;
    float e = 0.0001;


    while (x <= b) {

        int i = 0;

        float temp = 1;
        float s = 0;

        while (std::abs(temp) >= e) {


            temp = std::pow(2*x, i) / factorial(i);


            s += temp;

            i++;

        }


        std::cout << x << " | " << s << " | " << std::pow(M_E, 2* x) << std::endl;
        x += c;


    }


}