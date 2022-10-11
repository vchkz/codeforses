#include <iostream>
#include <cmath>
#include <vector>

int toTroika(int s, std::vector<int> &vec) {
    while (s > 0) {
        vec.push_back(s % 3);
        s /= 3;
    }
    return 0;


}


int main() {


    int iA;
    int iC;

    std::cin >> iA;
    std::cin >> iC;


    std::vector<int> va;
    std::vector<int> vb;
    std::vector<int> vc;


    toTroika(iC, vc);
    toTroika(iA, va);



    if (iA > iC) {

        int temp = va.size() - vc.size();

        for (int i = 0; i < temp;  ++i) {
            vc.push_back(0);
        }

    } else {
        int temp = vc.size() - va.size();
        for (int i = 0; i < temp; ++i) {
            va.push_back(0);
        }


    }





    for (int i = 0; i < vc.size(); ++i) {
        if (va[i] > vc[i]) { vb.push_back(vc[i] + 3 - va[i]); }
        else { vb.push_back(vc[i] - va[i]); }
    }


    int res = 0;
    for (int i = 0; i < vb.size(); ++i) {
        res += vb[i] * std::pow(3, i);
    }
    std::cout << res;
}