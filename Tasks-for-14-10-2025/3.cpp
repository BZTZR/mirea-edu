#include <iostream>
using namespace std;
double stepen(double a, double n){
    if(n == 0){
        return 1;
    }
    else{
        return a * stepen(a,n-1);
    }
}
int main() {
    cout<<"enter 2 numbers on the same line. Number and degree. Degree should be as a non-negative integer"<<endl;
    double a, n ;
    cin >> a >>n;
    if (n < 0 or int(n) != n){
         cout<<"Restart the program and enter number n correctly"<<endl;
        exit(0);
    }
    cout<<stepen(a,n)<<" - number 'a' in n degree "<<endl;
}
