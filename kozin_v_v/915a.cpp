#include <iostream>
#include <vector>
#include <algorithm>


int main(){

    int n = 0;
    int g = 0;
    std::cin >> n;
    std::cin >> g;
    std::vector <int> ved(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> ved[i];
    }
    std::sort(ved.rbegin(), ved.rend());


    for(int i: ved){
//        std::cout << i << std::endl;
        if (g % i == 0){
            std::cout << g / i;
            break;

        }
    }



}