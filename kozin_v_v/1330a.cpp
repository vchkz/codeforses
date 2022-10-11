#include <iostream>
#include <vector>



bool in(int s, std::vector<int>& vec) {

    for (int k = 0; k < vec.size(); k++) {
        if (s == vec[k]) { return true; }
    }
    return false;
}


int main()
{
    int countNub = 0;
    std::cin >> countNub;





    for (int i = 0; i < countNub; i++) {

        int countContests = 0;
        std::cin >> countContests;

        int plusContests = 0;
        std::cin >> plusContests;

        std::vector <int> a(countContests);

        for (int j = 0; j < countContests; j++) { std::cin >> a[j]; }

        int count = 1;



        while ((plusContests > 0) or (in(count, a))) {

            if (in(count, a)) { count += 1; }
            else {
                count += 1;
                plusContests -= 1;
            }

        }
        std::cout << count - 1 << std::endl;




    }




    return 0;
}