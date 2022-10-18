#include <iostream>
#include <string>

int main() {
    int len;
    std::cin >> len;
    std::string str;
    std::cin >> str;
    int res = 0;
    int x = 0;
    int y = 0;

    if (str[0] == 'U') {
        y++;}
    else {x++;}

    for (int i = 1; i < str.size(); ++i) {
//        std::cout << str[i];
        if (str[i] == 'U') {
            y++;
            if (y - x == 1 and str[i-1] == 'U') {
                res++;
            }
        } else {
            x++;
            if (x - y == 1 and str[i-1] == 'R') {
                res++;
            }
        }


    }
    std::cout << res;
}