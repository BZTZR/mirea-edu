#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> prefix_function(const string &s) {
    int n = (int)s.size();
    vector<int> pi(n);
    pi[0] = 0;
    for (int i = 1; i < n; i++) {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j]) j = pi[j - 1];
        if (s[i] == s[j]) j++;
        pi[i] = j;
    }
    return pi;
}

int main() {
    string S, P;
    getline(cin, S);
    getline(cin, P);

    string combined = P + "#" + S;
    vector<int> pi = prefix_function(combined);
    cout<<"The pattern '"<<P<< "' occurs in the string '"<<S<<"' at the positions:\n";
    for (int i = (int)P.size() + 1; i < (int)combined.size(); i++) {
        if (pi[i] == (int)P.size()) {
            cout << i - 2 * (int)P.size() << " ";
        }
    }
    cout << endl;
    return 0;
}
