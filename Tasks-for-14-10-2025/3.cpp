#include <iostream>
using namespace std;
int stepen(int a, int n){
    if(n == 0){
        return 1;
    }
    else{
        return a * stepen(a,n-1);
    }
}
int main() {
    int a = 5, n = 10;
    cout<<stepen(a,n)<<endl;
}
