#include <iostream>
#include <string>
using namespace std;
struct Friend {
    string surname;
    string name;
    int score1;
    int score2;
    int score3;
};
int main() {
    cout << "How much friends do you have? Enter only 1 number.";
    int n;
    cin >> n;
    Friend friends[100]; 
    for (int i = 0; i < n; ++i) {
        cout << "Enter surname,name and 3 scores of your friend. Enter this information as many times as you have entered the number of friends.";
        cin >> friends[i].surname 
                 >> friends[i].name 
                 >> friends[i].score1 
                 >> friends[i].score2 
                 >> friends[i].score3;
    }
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for (int i = 0; i < n; ++i) {
        sum1 += friends[i].score1;
        sum2 += friends[i].score2;
        sum3 += friends[i].score3;
    }
    double avg1 = static_cast<double>(sum1) / n;
    double avg2 = static_cast<double>(sum2) / n;
    double avg3 = static_cast<double>(sum3) / n;
    cout << avg1 << " " << avg2 << " " << avg3 <<endl;
    return 0;
}
