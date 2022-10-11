#include <iostream>
#include <vector>



int main()
{
    int lenlist = 0;
    std::cin >> lenlist;

    std::vector <int> a;

    std::vector <int> res;

    for (int i = 0; i < lenlist; i++) {
        int t = 0;
        std::cin >> t;
        a.push_back(t);

    }

    for (int i = lenlist - 1; i >= 0; i = i - 1) {


        bool flag = true;


        for (int j = 0; j < res.size(); j++) {
            if (res[j] == a[i]) {
                flag = false;
            }
        }


        if (flag) {
            res.push_back(a[i]);
        }


    }

    std::cout << res.size() << "\n";

    for (int j = 0; j < res.size(); j++) {
        std::cout << res[res.size() - 1 - j] << " ";
    }
    return 0;
}