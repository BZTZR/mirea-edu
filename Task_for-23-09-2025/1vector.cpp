#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> students;
    
    for (int i = 0; i < n; i++) {
        int pair;
        cin >> pair;
        students.push_back(pair);
    }
    
    vector<int> stack;
    int removed_count = 0;
    
    for (int i = 0; i < n; i++) {
        if (!stack.empty() && stack.back() == students[i]) {
            stack.pop_back();
            removed_count += 2;
        } else {
            stack.push_back(students[i]);
        }
    }
    
    cout << removed_count << endl;
    
    return 0;
}
