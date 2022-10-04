#include <iostream>
#include <cmath>


int factorial(int ii) {
    if (ii == 0) { return 1; }

    if (ii > 1) {
        return ii * factorial(ii - 1);
    } else { return ii; }
}


int main() {
    std::cout << "x | s(x) | f(x)" << std::endl;

    double x = -1;
    float b = 1;
    double c = 0.1;
    float e = 0.001;


    while (x < b) {

        int i = 0;

        float temp = 1;
        float s = 0;

        while (std::abs(temp) > e) {


            temp = std::pow(-1, i) * std::pow(x, 2 * i) / factorial(2 * i);


            s += temp;

            i++;

        }


        std::cout << x << " | " << s  << " | " << std::cos(x) << std::endl;
        x += c;


    }


}