#include <iostream>
#include <vector>
#include <cmath>


int main() {
    int t;
    std::cin >> t;
    while (t--) {

        int n = 3;
        std::cin >> n;
//        std::vector <std::vector<int>> arr;
        std::vector <std::vector<int> > arr(n, std::vector<int>(2));
//
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i][0];
            std::cin >> arr[i][1];
        }

//        for (int i = 0; i < n; ++i) {
//            std::cout << arr[i][0] << ' ';
//            std::cout << arr[i][1] << std::endl;
//        }

        std::vector <int> delay(n);

        for (int i = 0; i < n; ++i) {
            std::cin >> delay[i];
        }
        int time = 0;
        time += arr[0][0] + delay[0];


        for (int i = 0; i < n-1; ++i) {
            if ( (time + std::ceil((arr[i][1] - arr[i][0]) / 2.0)) >= arr[i][1]){
                int a = std::ceil((arr[i][1] - arr[i][0]) / 2.0);
                time += a;
            }
            else{time = arr[i][1];}
            time += (arr[i+1][0] - arr[i][1] + delay[i + 1]);



        }
        std::cout << time << std::endl;



    }
}