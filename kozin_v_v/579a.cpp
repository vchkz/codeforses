#include <iostream>

int main(){
    int a = 0;
    std::cin >> a;
    int b = 0;
    while (a){
        b += a & 1;
        a >>= 1;
    }
    std::cout << b;
}