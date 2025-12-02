#include <iostream>
using namespace std;

long long tc(int n){
    if(n<0) return 0;
    if(n<=1) return 1;
    long long prev = 1;
    long long cur = 1;
    for(int i = 2; i <= n; ++i){
        long long next = prev + cur;
        prev = cur;
        cur = next;
    }
    return (int)cur;
}

int main()
{
    cout<<tc(5);
}
