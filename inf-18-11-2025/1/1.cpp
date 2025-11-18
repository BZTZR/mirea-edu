#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    string bad = "useragreement";

    char ch;
    while (in.get(ch)) {
        bool unwanted = false;
        for (char b : bad) {
            if (tolower(ch) == b) unwanted = true;
        }
        if (!unwanted) out << ch;
    }
    in.close();
    out.close();
    return 0;
}
