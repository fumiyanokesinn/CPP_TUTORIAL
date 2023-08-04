
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int input1;
    int input2;
    cin >> input1 >> input2;
    int difference = std::abs(input1 - input2);

    if (difference == 1) {
        std::vector<int> vec{3, 5, 9, 11, 15, 17};
        int target = input1 + input2;

        bool found = std::find(vec.begin(), vec.end(), target) != vec.end();
        cout << (found ? "Yes" : "No") << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}