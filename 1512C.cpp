//
// Created by kozin on 26.09.2022.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    int t = 1;
    std::cin >> t;
    while (t--) {
        int a, b, a1, b1;
        std::cin >> a >> b;
        std::string s;
        std::cin >> s;

        a1 = a, b1 = b;

        bool success = true;

        if (a % 2 != 0 and b % 2 != 0) success = false;

        if (a < 0 or b < 0) success = false;

        int l = 0;
        int r = s.size() - 1;

        for (int i = 0; i <= r; i++) {
            if (s[i] == '0')a--;
            else if (s[i] == '1')b--;
        }


        while (l <= r) {


            if (s[l] == '1' and s[r] == '?' and b > 0) {
                s[r] = '1';
                b--;
            } else if (s[r] == '1' and s[l] == '?' and b > 0) {
                s[l] = '1';
                b--;
            } else if (s[l] == '0' and s[r] == '?' and a > 0) {
                s[r] = '0';
                a--;
            } else if (s[l] == '?' and s[r] == '0' and a > 0) {
                s[l] = '0';
                a--;
            } else if (s[l] != '?' and s[r] != '?' and s[l] != s[r]) { success = false; }


            l++, r--;

        }

        l = 0, r = s.size() - 1;

        while (l <= r) {
            if (s[l] == '?' and s[r] == '?') {
                if (l == r) {
                    if (a == 1) {
                        s[l] = '0';
                        a--;
                    } else if (b == 1) {
                        s[l] = '1';
                        b--;
                    }
                } else if (a > 1) {
                    s[l] = '0';
                    s[r] = '0';
                    a -= 2;
                } else if (b > 1) {
                    s[l] = '1';
                    s[r] = '1';
                    b -= 2;
                } else success = false;
            }

            l++;
            r--;


        }


        for (char i: s) {
            if (i == '0') { a1--; }
            else if (i == '1') { b1--; }
            else success = false;
        }

        if (a1 != 0 or b1 != 0) { success = false; }

        if (success) {
            std::cout << s << std::endl;
        } else { std::cout << -1 << std::endl; }

    }
}