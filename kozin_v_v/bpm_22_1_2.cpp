#include <iostream>



int main() {

    float count = 0;
    float vsego = 0;

    while (std::cin.good()){
        vsego++;
        float x = 0;
        float y = 0;
        std::cin >> x;
        std::cin >> y;
        if ((x * x + y * y) <= 4 and y >= (2 - x * x)){
            count++;

        }

    }
    float result = count/vsego;
    std::cout << result;
}
