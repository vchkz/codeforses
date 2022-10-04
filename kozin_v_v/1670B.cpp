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


        int result = 0;
        int last = 0;



            for (int j = 0; j < len_word; ++j) {
                if (in(word[j], spec_simb)) {
                    if (result < j - last){result = j - last;}
                    last = j;

                }


            }


        std::cout << result << std::endl;


    }


    return 0;
}
