#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(const vector<int>& data, int key) {
    int start = 0;
    int end = data.size() - 1;

    while (start <= end) {
        int middle = start + (end - start) / 2;

        if (data[middle] == key) {
            return middle;
        } else if (data[middle] < key) {
            start = middle + 1;
        } else {
            end = middle - 1;
        }
    }

    return -1;
}

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    vector<int> values(size);
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> values[i];
    }

   
    sort(values.begin(), values.end());

    cout << "Sorted Array: ";
    for (int value : values) {
        cout << value << " ";
    }
    cout << endl;

    int searchItem;
    char choice = 'y';
    while (choice == 'y' || choice == 'Y') {
        cout << "Enter element to search: ";
        cin >> searchItem;

        int resultIndex = binarySearch(values, searchItem);
        if (resultIndex != -1) {
            cout << "Element " << searchItem << " found at index " << resultIndex << endl;
        } else {
            cout << "Element " << searchItem << " not found." << endl;
        }

        cout << "Do you want to search another element? (y/n): ";
        cin >> choice;
    }

    return 0;
}

/*OUTPUT
Enter number of elements: 5
Enter 5 elements:
14 11 4 9 8
Sorted Array: 4 8 9 11 14 
Enter element to search: 11
Element 11 found at index 3
*/