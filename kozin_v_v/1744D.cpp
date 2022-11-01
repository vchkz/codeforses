#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

int main() {
    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0;
        std::cin >> n;
        int countTwos = 0;
        for (int i = 0; i < n; ++i) {
            int a;
            std::cin >> a;
            while (a % 2 == 0) {
                countTwos++;
                a = a / 2;
            }


        }

        int j = 0;

        bool res = true;
        std::vector<int> a(n, 0);

        for (int i = 0; i < n; ++i) {
            int s = i + 1;
            while (s % 2 == 0) {
                a[i] += 1;
                s = s/2;
            }
        }
//        for (int i = 0; i < n; ++i) {
//            std::cout << a[i] << ' ';
//        }
        std::sort( a.begin(), a.end(), std::greater<int>() );

        if (countTwos >=n){std::cout << 0; res = false;}
        else{
            for (int i = 0; i < n; ++i) {
                countTwos += a[i];
                if (countTwos >= n ){std::cout << i + 1; res = false;
                    break;}
            }
        }
        if (res){std::cout << -1;}
        std::cout << std::endl;



    }
}
