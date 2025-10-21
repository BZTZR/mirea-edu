#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool f(const string &j, const string &k) {
    if (j.length() != k.length()){
        return false;
    }
    for (size_t i= 0; i<j.length(); i++){
        if(tolower(j[i]) != tolower(k[i])){
            return false;
        }
    }
    return true;
}
int main() {
    cout << "enter 2 strings on the same line"
    string j;//"SFsksfF";
    string k;//"SfSfsff";
    cin >> j >> k;
    if (f(j,k) == 1){
        cout<<"equal\n";
    }
    else{
        cout<< "not equal\n";
    }
}
