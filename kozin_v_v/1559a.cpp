//
// Created by kozin on 14.10.2022.
//
#include <iostream>


int main(){
    int a;
    std::cin >> a;
    while (a--){
        int n;
        std::cin >> n;
        int s = 0;
        int v;
        std::cin >> s;
        for (int i = 1; i < n; ++i) {
            std::cin >> v;
            s = s & v;
        }
        std::cout << s << std::endl;
    }
}