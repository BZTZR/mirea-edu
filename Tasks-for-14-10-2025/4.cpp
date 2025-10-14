#include <iostream>
#include <string>
using namespace std;
int razm(const string &a){
    int count = 0;
    for(char i : a){
        count++;
    }
    return count;
}
int main() {
    string a = "lllllllgbnjn";
    cout<<razm(a)<<endl;
}
