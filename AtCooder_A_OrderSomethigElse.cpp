
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int input1;
    int input2;
    int input3;
    int price;
    cin >> input1 >> input2 >> input3;

    vector<int> input4(input1);
    for (int i = 0; i < input1; i++) {
        cin >> price;
        input4[i] = price;
        cout << input4[i] << endl;
    }
    return 0;
}