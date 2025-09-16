#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Tmyv Deneg LLC"<<endl;
    cout << "Write 2 numbers each on a separate line indicating the amount of money in thousands.\n Example: Input: 12, Enter(Line break) key, Input: 50"<<endl;
    double X, Y;
    cin >> X;
    cin >> Y;
    
    int day = 1;
    double current = X;
    
    while (current <= Y) {
        current *= 1.1;
        ++day;
        cout << day<<" "<< current<< endl;
    }
    
    cout << "Interesed on " << day << " day" << endl;
    cout << fixed << setprecision(3);
    cout << "Amount of money laundered " << current<< " thousands of rubles" << endl;
    
    return 0;
}
