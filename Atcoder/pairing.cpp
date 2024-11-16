#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> numbers(4);
    for (int i = 0; i < 4; ++i) {
        cin >> numbers[i];
    }

    int count = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (numbers[i] == numbers[j]) {
                numbers.erase(numbers.begin() + j);
                numbers.erase(numbers.begin() + i);
                count++;
                i = -1; // Restart the outer loop
                break;
            }
        }
    }

    cout << count << endl;

    return 0;
}