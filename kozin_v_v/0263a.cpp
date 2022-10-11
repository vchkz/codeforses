
#include <iostream>

int main() {
    int oi = 0;
    int oj = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int a;
            std::cin >> a;
            if (a == 1) {
                oi = i;
                oj = j;
            }
        }
    }

    std::cout << abs(oi - 2) + abs(oj - 2) << "\n";

    return 0;
}