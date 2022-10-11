#include <iostream>
#include <string>
#include <algorithm>

int main(){
    int a;
    std::cin >> a;
    while (a--){
        bool flag = true;
        std::string b;
        std::string bb;
        std::cin >> b;
        if (b.size() == 1){flag = false;}

        bb = "#" + b + "#";
//        std::cout<<bb;

//        int na = 0;
//        int nb = 0;
//        for (int i = 1; i < b.size(); ++i) {
//            if (b[i] == b[i-1]){
//                if(b[i] == 'a'){na++;}
//                if(b[i] == 'b'){nb++;}
//
//            }
//            else if (b[i] == 'b'){
//                if(na == 1){flag = false; break; }
//                else{na=0;}
//
//            }
//            else if (b[i] == 'a'){
//                if(nb == 1){flag = false; break; }
//                else{nb=0;}
//            }
//
//        }
        if(bb.find("#ab") != std::string::npos or bb.find("#ba") != std::string::npos or bb.find("ba#") != std::string::npos or bb.find("ab#") != std::string::npos or bb.find("bab") != std::string::npos or bb.find("aba") != std::string::npos){flag = false;}
        if (flag){std::cout << "YES" << std::endl;}
        else {std::cout << "NO"<< std::endl;}


    }
}