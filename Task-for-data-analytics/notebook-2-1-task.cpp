#include <iostream>
#include <string>
using namespace std;
int gcd(int first, int second){
    int raz = 0;
    bool flag = false;
    while(flag==false){
        if (first == second){
            flag = true;
        }
        else if (first<second){
            raz = second-first;
            second = first;
            first = raz;
        }
        else{
            raz = first - second;
            first = second;
            second = raz;
        }
    }
    return first;
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a <= 0 or b <= 0 or c <= 0 or d <= 0):
        print("Error")
    cout<<gcd(a,gcd(b,gcd(c,d)));
}
