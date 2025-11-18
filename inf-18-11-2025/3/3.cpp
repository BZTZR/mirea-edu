#include <fstream>
#include <string>
using namespace std;

string to_bin(int num) {
    string res = "";
    if (num == 0) return "0";
    while (num > 0) {
        res = char('0' + num % 2) + res;
        num /= 2;
    }
    return res;
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    string s;
    getline(in, s);
    int i = 0;
    while (i < s.size()) {
        if (isdigit(s[i])) {
            int j = i;
            while (j < s.size() && isdigit(s[j])) ++j;
            int num = stoi(s.substr(i, j - i));
            out << to_bin(num);
            i = j;
        }
        else {
            out << s[i];
            ++i;
        }
    }
    in.close();
    out.close();
    return 0;
}
