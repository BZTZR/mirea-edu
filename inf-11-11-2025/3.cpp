#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    list<string> students = {"Ivanov", "Petrov", "Sidorov", "Alexeev", "Borisov"};

    students.sort();

    students.remove_if([](const string& name) {
        return name[0] == 'A';
    });

    for (const auto& s : students) {
        cout << s << '\n';
    }

    return 0;
}
