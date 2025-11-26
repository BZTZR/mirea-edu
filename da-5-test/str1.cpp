#include <iostream>
#include <string>
using namespace std;
int main() {
    string text;
    getline(cin,text);
    string words[text.size()];
    int count = 0;

    size_t pos = 0, found;
    while ((found = text.find(' ', pos)) != string::npos) {
        words[count++] = text.substr(pos, found - pos);
        pos = found + 1;
    }

    words[count++] = text.substr(pos);

    for (int i = count - 1; i >= 0; --i) {
        cout << words[i];
        if (i > 0) cout << " ";
    }
    cout << endl;

    return 0;
}
