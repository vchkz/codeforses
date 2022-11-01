#include <iostream>
#include <vector>

int main(){



    int n;
    long long k;
    std::cin >> n;
    std::cin >> k;
    std::vector <int> vec(n * 2, 0);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }

    for (int i = n; i < n*2; ++i) {
        vec[i] = vec[i-n];
    }


//    for (int i = 0; i < vec.size(); ++i) {
//        std::cout << vec[i] << ' ';
//    }


    int maxPower = vec[0];
//    for (int i = 0; i < k; ++i) {
//        if (maxPower < vec[i]){maxPower = vec[i];}
//    }
    if (k>n){k=n;}

    int s=0;
    for (int i = 0; i < vec.size() - 1; ++i) {
        s++;
        if (maxPower < vec[i+1]){
            maxPower = vec[i+1];
            s = 1;}
        if (s >= k){ break;}

    }

//    for (int i = 0; i < k; ++i) {
//        if (maxPower < vec[i+1]){
//            maxPower = vec[i+1];
//        }
//    }
    std::cout << maxPower;

}