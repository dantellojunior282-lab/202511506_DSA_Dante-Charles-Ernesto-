 #include <iostream>
#include <string>
using namespace std;

// Binary Search Function
int binarySearch(string names[], int n, string key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (names[mid] == key)
            return mid;               // Found
        else if (names[mid] < key)
            low = mid + 1;            // Search right half
        else
            high = mid - 1;           // Search left half
    }
    return -1;                        // Not found
}

int main() {
    const int SIZE = 5;
    string names[SIZE];
    int ages[SIZE];

    // Input family members
    cout << "Enter " << SIZE << " family members (name and age):\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Member " << i + 1 << " Name: ";
        cin >> names[i];
        cout << "Member " << i + 1 << " Age: ";
        cin >> ages[i];
    }

    // Sort names first (Binary Search requires sorted data)
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (names[j] > names[j + 1]) {
                swap(names[j], names[j + 1]);
                swap(ages[j], ages[j + 1]);   // Keep ages aligned
            }
        }
    }

    // Search
    string key;
    cout << "\nEnter name to search: ";
    cin >> key;

    int result = binarySearch(names, SIZE, key);

    if (result != -1)
        cout << key << " was found and is aged " << ages[result] << endl;
    else
        cout << key << " - Not found" << endl;

    return 0;
}
