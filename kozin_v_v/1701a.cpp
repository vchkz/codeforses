#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {


        int x1, x2, y1, y2;


        std::cin >> x1;
        std::cin >> x2;
        std::cin >> y1;
        std::cin >> y2;


        if ((x1+x2+y1+y2) == 4){std::cout << 2 << std::endl;}
        else if ((x1+x2+y1+y2) >= 1){std::cout << 1 << std::endl;}
        else{std::cout << 0 << std::endl;}

    }
}