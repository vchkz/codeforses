#include <string>
#include <iostream>
#include <typeinfo>
#include <algorithm>

int main() {
    std::string s = "polkao";
//    std::cout << s[1]   << std::endl;
//    s.replace(1, 2, "@@@");


//    s.replace(s.find('o', 1),1,"@");
//    s.erase(s.find('o', 1), 1);

    // заменить все вхождения символа
    std::replace(s.begin(), s.end(), 'o', '$');


    // удалить все вхождения символа
    s.erase(std::remove(s.begin(), s.end(), '$'), s.end());

    std::cout << s  << std::endl;
//    std::cout << s.find('%', 1)  << std::endl;
    return 0;
}
