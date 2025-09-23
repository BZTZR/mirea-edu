#include <iostream>
using namespace std;
int main() {
    int start = 1;
    int end = 100;
    srand(time(0));
    cout<<"Print a size of a array. Only a one number\n";
    int n;
    cin>>n;
    int j[n];
    for(int i = 0; i < n; i++)
    {
       j[i] = rand() % (end - start + 1) + start;
       cout<<j[i]<<" ";
    }
    int min = j[0];
    int max = j[0];
    int length = sizeof(j) / sizeof(j[0]);

    for(int k = 0; k < length; k++)
    {
        if(j[k] < min)
        {
       	 min = j[k];
        }
    
        if(j[k] > max)
        {
       	 max = j[k];
        }
    }
    cout<<"\n"<<min<<" "<<max<<" - 1st is min, 2nd is max";
}