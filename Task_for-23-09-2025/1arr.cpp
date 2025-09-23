#include <iostream>
using namespace std;
int main() {
    int start = 1;
    int end = 100;
    srand(time(0));
    cout<<"Print a size of a array. Only a one number\n";
    int n;
    double s = 0;
    cin>>n;
    int j[n];
    for(int i = 0; i < n; i++)
    {
       j[i] = rand() % (end - start + 1) + start;
       cout<<j[i]<<" ";
       s+= j[i];
    }
    cout<<"\n"<<s/n<<" - the arithmetic mean of the array";
}
