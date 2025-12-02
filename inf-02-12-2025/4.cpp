#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int mots(vector<int>& a){
    int n = (int)a.size();
    vector<pair<int,int>> v(n);
    for (int i =0; i<n; ++i){
        v[i] = {a[i], i};
    }
    sort(v.begin(), v.end());
    vector <bool> used(n, false);
    int res = 0;
    for(int i = 0; i < n; ++i){
        if (used[i] || v[i].second == i) continue;
        int cycle = 0;
        int j =i;
        while(!used[j]){
            used[j] = true;
            j = v[j].second;
            ++cycle;
        }
        if(cycle>1) res+= cycle - 1;
    }
    return res;
}
int main()
{
    vector<int> a = {123, 11, 84, 4, 1, 2, 12412, 32 ,84, 13, 18};
    
    cout<<mots(a);
}
