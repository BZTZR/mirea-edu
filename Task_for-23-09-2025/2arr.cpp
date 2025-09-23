#include <iostream>
using namespace std;
int main() {
    int start = 1;
    int end = 100;
    srand(time(0));
    cout<<"Print a size of a array. Only a one number\n";
    int n;
    int ch = 0;
    int nch = 0;
    cin>>n;
    int j[n];
    for(int i = 0; i < n; i++)
    {
       j[i] = rand() % (end - start + 1) + start;
       cout<<j[i]<<" ";
       if (j[i] % 2 == 0){
           ch++;
       }
       else{
           nch++;
       }
    }
    cout<<"\n"<<ch<<" "<<nch<<" - 1st is count of even numbers, 2nd is count for odd numbers";
}