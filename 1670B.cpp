#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool in(char s, std::vector<char> &vec) {

    for (int k: vec) {
        if (s == k) { return true; }
    }
    return false;
}


int main() {
    int num_set;
    std::cin >> num_set;
    for (int i = 0; i < num_set; ++i) {
        int len_word;
        std::cin >> len_word;

        std::string word;
        std::cin >> word;

        int num_special_simb;
        std::cin >> num_special_simb;

        std::vector<char> spec_simb(num_special_simb);

        for (int j = 0; j < num_special_simb; ++j) { std::cin >> spec_simb[j]; }


        int result = -1;
        bool flag = true;

        while (flag) {
            flag = false;
            result += 1;
            for (int j = 0; j < word.size(); ++j) {
                if (in(word[j + 1], spec_simb)) {
                    word.replace(j, 1, "@");
                    flag = true;

                }


            }
            word.erase(std::remove(word.begin(), word.end(), '@'), word.end());
        }
        std::cout << result << std::endl;


    }


    return 0;
}
