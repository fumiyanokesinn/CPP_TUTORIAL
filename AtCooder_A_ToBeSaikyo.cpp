
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int number;
    cin >> number;

    // それぞれのプログラミング力を配列として保持する
    vector<int> people(number);
    for (int i = 0; i < number; i++) {
        int person;
        cin >> person;
        people[i] = person;
    }

    // P1を取得して、配列から削除
    int player = people[0];
    people.erase(people.begin());
    int max = 0;
    for (int person : people) {
        if (max < person) {
            max = person;
        }
    }

    int difference = 1;
    if (player < max) {
        difference = max - player + 1;
    } else if (player > max) {
        difference = 0;
    }

    cout << difference << endl;

    return 0;
}