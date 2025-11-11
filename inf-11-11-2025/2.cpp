#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    cout<<"Enter the number of orders\n";
    int n;
    cin >> n;
    cout<<"Enter your orders. Urgent ones with a '!' at the end or at the beginning, ordinary ones without them\n";
    deque<string> orders;
    cin.ignore();

    string order;
    for (int i = 0; i < n; i++) {
        getline(cin, order);
        if (order.find('!') != string::npos) {
            orders.push_front(order);
        } else {
            orders.push_back(order);
        }
    }

    while (!orders.empty()) {
        cout << "Completing order: \"" << orders.front() << "\"\n";
        orders.pop_front();
    }

    cout << "there is no orders. End\n";
    return 0;
}
