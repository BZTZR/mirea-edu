#include <iostream>
#include <map>
#include <set>
#include <string>

int main() {
    int n;
    if (!(std::cin >> n)) {
        return 0;
    }

    std::map<int, std::set<std::string>> index;

    for (int i = 0; i < n; ++i) {
        std::string word;
        int page;
        std::cin >> word >> page;
        index[page].insert(word);
    }

    for (const auto& [page, words] : index) {
        std::cout << page;
        for (const auto& w : words) {
            std::cout << ' ' << w;
        }
        std::cout << '\n';
    }
}
