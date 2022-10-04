#include <iostream>
#include <cmath>

//int toTroika(int a) {
//    while (a > 0) {
//
//    }
//
//
//}


int main() {
    int num, sys, num2 = 0, i;
    num = 14;
    sys = 3;
    for (i = 0; num >= sys - 1; i++) {
        num2 += (num % sys) * pow(10, i);
        num /= sys;
    }
    std::cout << num2 << " ";
    num2 += num * pow(10, i++);
    std::cout << num2 << " " << num;
}