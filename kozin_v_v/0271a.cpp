#include <iostream>

int main() {
    int w = 0;
    std::cin >> w;


    for (int i = w + 1; i < 9999; i++) {

        int s1 = i / 1000;
        int s2 = (i / 100) % 10;
        int s3 = (i / 10) % 10;
        int s4 = i % 10;

        bool s = (s1 != s2);
        s = s && (s1 != s2);
        s = s && (s1 != s3);
        s = s && (s1 != s4);
        s = s && (s2 != s3);
        s = s && (s2 != s4);
        s = s && (s3 != s4);

        if (s) {
            std::cout << i;
            break;
        }


    }


}