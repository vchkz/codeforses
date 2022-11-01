#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n = 0;
    std::cin >> n;
    std::vector <int> vec(n, 0);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }
    std::sort( vec.begin(), vec.end() );

    int res = 1;
    for (int i = 0; i < n; ++i) {
        if (res <= vec[i]){
            res++;
        }
    }
    std::cout << res - 1;

}