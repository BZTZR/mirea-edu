#include <iostream>
#include <string>
#include <set>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> words;
    for (int i = 0; i < n; ++i) {
        std::string word;
        std::cin >> word;
        words.push_back(word);
    }

    std::set<char> common;
    for (char c : words[0]) {
        common.insert(c);
    }

    for (int i = 1; i < words.size(); ++i) {
        std::set<char> cur;
        for (char c : words[i]) {
            cur.insert(c);
        }

        std::set<char> inter;
        for (char c : common) {
            if (cur.count(c)) {
                inter.insert(c);
            }
        }
        common = inter;
    }

    for (char c : common) {
        std::cout << c;
    }
    std::cout << '\n';

    return 0;
}
