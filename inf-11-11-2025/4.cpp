#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> lst;

    lst.insert_after(lst.before_begin(), 5);
    lst.insert_after(lst.before_begin(), 4);
    lst.insert_after(lst.before_begin(), 3);
    lst.insert_after(lst.before_begin(), 2);
    lst.insert_after(lst.before_begin(), 1);

    for (int x : lst) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
