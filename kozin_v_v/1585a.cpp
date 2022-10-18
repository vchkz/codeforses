#include <iostream>
#include <vector>
#include <cmath>


int main() {
    int t;
    std::cin >> t;
    while (t--) {


        int n = 3;
        int temp = -1;
        int w;
        int res = 1;
        std::cin >> n;

        for (int i = 0; i < n; ++i) {

            std::cin >> w;

            if (w == 1 and (temp == 0 or temp == -1) and res != -1){
                res+=1;
                temp=1;
            }
            else if(w == 1 and temp == 1 and res != -1){
                res+=5;
                temp = 1;
            }
            else if(w==0 and temp == 0){
                res = -1;
            }
            else{
                temp = 0;
            }




        }
        std::cout << res << std::endl;

    }
}