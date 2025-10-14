#include <iostream>
#include <vector>
using namespace std;
void f(vector<int>& v) {
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int i : v){
        cout << i << " ";
    }
}
int main() {
    vector<int> kek{4,783,1,2,5,7,1,5,5,5,7,8,1,5,7,};
    f(kek);
}
