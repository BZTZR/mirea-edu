#include <iostream>
#include <vector>
using namespace std;
void f(vector<int>& v) {
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int i : v){
        cout << i << " ";
    }
    cout<<"- an array without duplicates"<<endl;
}
int main() {
    cout<<"Enter the numbers for the array separated by a space and enter 0 if you want to finish filling in the vector array."<<endl;
    int x;
    vector<int> kek;
    while(cin>>x and x != 0){
        kek.push_back(x);
    }
    f(kek);
}
