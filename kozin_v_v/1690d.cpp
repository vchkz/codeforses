#include <iostream>
#include <string>
#include <algorithm>

int main(){
    int a;
    std::cin >> a;
    while (a--){
        int n;
        std::cin >> n;

        int len;
        std::cin >> len;

        std::string str;
        std::cin >> str;

        int res = 10000000;



        for (int i = 0; i < str.size() - len + 1; ++i) {
            int count = 0;
            for (int j = i; j < i + len; ++j) {
                if (str[j] == 'W'){count++;}
            }
            if (res > count){res = count;}
        }
        std::cout << res << std::endl;
    }
}
