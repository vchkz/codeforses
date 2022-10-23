#include <iostream>
#include <vector>

int main(){
    int a;
    std::cin >> a;
    while (a--){
        int n;
        std::cin >> n;
        std::vector <char> s(n);
        for (int i = 0; i < n; ++i) {
            std::cin>>s[i];
        }
        s.push_back('W');


//        for (int i = 0; i < s.size(); ++i) {
//            std::cout << s[i] << std::endl;
//        }



        bool result = false;
        int countR = 0;
        int countB = 0;
        for (int i = 0; i < n+1; ++i) {
            if (s[i] == 'W'){
                if ((countB == 0 and countR != 0) or (countR == 0 and countB != 0)){
                    result = true;
                }
                else{
                    countR = 0;
                    countB = 0;
                }
            }
            if (s[i] == 'R'){countR++;}
            if (s[i] == 'B'){countB++;}
        }
        if (result){std::cout << "NO" << std::endl;}
        else {std::cout << "YES" << std::endl;}

    }
}
