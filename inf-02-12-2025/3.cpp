#include <iostream>
#include <vector>
using namespace std;

int n;
int cnt;
vector<bool> col, d1, d2;

void go(int row){
    if(row==n){
        ++cnt;
        return;
    }
    for(int c = 0; c < n; ++c){
        int id1 = row - c + n - 1;
        int id2 = row + c;
        if (col[c] || d1[id1] || d2[id2]) continue;
        col[c] = d1[id1] = d2[id2] = true;
        go(row + 1);
        col[c] = d1[id1] = d2[id2] = false;
    }
}
int solve(int x){
    n = x;
    cnt = 0;
    col.assign(n, false);
    d1.assign(2*n-1, false);
    d2.assign(2*n-1, false);
    go(0);
    return cnt;
}

int main()
{
    int x;
    cin>>x;
    cout<<solve(x)<<" ";
    return 0;
}
