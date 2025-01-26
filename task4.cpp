#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int numbers[size], evenCount = 0, oddCount = 0;
    cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    cout << "\nNumber of even numbers: " << evenCount << endl;
    cout << "Number of odd numbers: " << oddCount << endl;

    return 0;
}
