#include <iostream>
using namespace std;

int main() {
    int start = 1;
    int end = 100;
    srand(time(0));
    cout<<"Print a size of a two-dimensional array. Write 2 numbers through space button. Example: 2 2\n";
    int n;
    int m;
    double s = 0;
    cin>>n>>m;
    
    int j[n][m];
    
    for(int i = 0; i < n; i++)
    {
        for(int k = 0; k < m; k++){
            j[i][k] = rand() % (end - start + 1) + start;
            cout<<j[i][k]<<" ";
            if(i == k){
                s += j[i][k];
            }
            
        }
        cout << endl;
    }
    
    cout<<"\n"<<s<<" - Sum of diagonal of two-dim. array";
}