#include <iostream>
#include <vector>

int main(){
    int a = 0;
    std::cin >> a;
    while(a--){
        int n = 0;
        std::cin >> n;
        std::vector <int> vec(n, 0);
        for (int i = 0; i < n; ++i) {
            std::cin >> vec[i];
        }

        int firstZero = 0;
        for (int i = 0; i < n; ++i) {
            if (vec[i] == 0){
                firstZero = i;
                break;
            }
        }
        int lastZero = 0;
        for (int i = n - 1; i > 0; i--) {
            if (vec[i] == 0){
                lastZero = i;
                break;
            }
        }

        if(firstZero == 0){std::cout << 0 << std::endl;}
        else {std::cout << (lastZero - firstZero) + 2 << std::endl;}


    }
}
