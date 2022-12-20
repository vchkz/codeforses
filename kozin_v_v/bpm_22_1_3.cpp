#include <iostream>
#include <string>

bool is_glasnay(char x) {
    std::string glasn = "aouie";

    for (int k = 0; k < 5; k++) {
        if (x == glasn[k]) { return true; }
    }
    return false;
}

int main() {
    std::string word;
    std::cin >> word;
    bool flag = true;
    for (int i = 0; i < word.size() - 1; ++i) {
        if (not is_glasnay(word[word.size() - 1]) and word[word.size() - 1] != 'n'){
            flag = false;
        }
        if (not is_glasnay(word[i]) and not is_glasnay(word[i+1]) and word[word.size() - 1] != 'n'){
            flag = false;
        }


    }
    if (flag){std::cout << "YES";}
    else{std::cout << "NO";}
}