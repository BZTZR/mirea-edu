#include <vector>
#include <iostream>
using namespace std;
template <typename T>
void Duplicate(std::vector<T>& v) {
    size_t og = v.size();
    for (size_t i = 0; i < og ; ++i) {
        v.push_back(v[i]);
    }
}
int main(){
    vector<int> v = {1,2,3};
    Duplicate(v);
    for (int x : v){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
