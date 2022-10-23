#include <iostream>
#include <string>

int main(){
    int a;
    std::cin >> a;
    while (a--){

        std::string n;
        std::cin >> n;


        int lastOne = 0;
        int firstZero = n.size();

        for (int i = 0; i < n.size(); ++i) {
            if (n[i] == '1'){lastOne = i;}
            if (n[i] == '0' and firstZero == n.size()){firstZero = i + 1;}
        }
        std::cout << firstZero - lastOne << std::endl;

    }
}
