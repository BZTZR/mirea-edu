#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> a = {1, 3, 5, 7};
    list<int> b = {2, 3, 6, 7, 8};


    a.merge(b);


    a.unique();


    a.remove_if([](int x) { return x > 6; });


    for (int x : a) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
