#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream in1("input1.txt");
    ifstream in2("input2.txt");
    string X, Y;
    getline(in1, X);
    getline(in2, Y);

    if (X.find(Y) != string::npos) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    in1.close();
    in2.close();
    return 0;
}
