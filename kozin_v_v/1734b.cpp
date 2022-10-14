//
// Created by kozin on 14.10.2022.
//
#include <iostream>

int main(){
    int w;
    std::cin >> w;
    while (w--){
        int a;
        std::cin >> a;
        for (int i = 1; i <= a; ++i) {
            if (i == 1){std::cout << 1 << std::endl;}
            else if (i == 2){std::cout << "1 1" << std::endl;}
            else{
                std::cout << "1 ";
                for (int j = 0; j < i-2; ++j) {
                    std::cout << "0 ";
                }
                std::cout << "1" << std::endl;
            }

        }
    }
}