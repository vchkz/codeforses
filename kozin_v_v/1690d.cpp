#include <iostream>
#include <string>

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

        int count = 0;

        for (int i = 0; i < len; ++i) {
            if (str[i] == 'W'){
                count++;
            }
        }
        int res = 0;
        res = count;

        for (int i = len; i < n; ++i) {
            if (str[i] == 'W'){
                res++;
            }
            if (str[i-len] == 'W'){
                res--;
            }
            if (count > res){count = res;}

        }
        std::cout << count << std::endl;
    }
}
