#include <iostream>
#include <vector>

int main(){
    int a = 0;
    std::cin >> a;
    std::vector <int> vec(a, 0);
    for (int i = 0; i < a; ++i) {
        std::cin >> vec[i];
    }

    for (int i = 1; i < a + 1; ++i) {
        for (int j = 0; j < a; ++j) {
            if(vec[j] == i){std::cout << j + 1 << ' ';}

        }
    }

}
