#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    vector<string> words;
    size_t pos = 0, found;

    while ((found = text.find(' ', pos)) != string::npos) {
        words.push_back(text.substr(pos, found - pos));
        pos = found + 1;
    }
    words.push_back(text.substr(pos));

    string max = words[0];
    for (int i = 1; i < (int)words.size(); i++) {
        if (max.size() < words[i].size()) {
            max = words[i];
        }
    }
    cout << max << endl;

    return 0;
}
