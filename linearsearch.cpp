#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int>& data, int key) {
    for (int i = 0; i < data.size(); ++i) {
        if (data[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    vector<int> values = {34, 4, 89, 5, 4, 10};

    
    int searchItem = 4;
    int resultIndex = linearSearch(values, searchItem);

    cout << "Array: ";
    for (int value : values) {
        cout << value << " ";
    }
    cout << endl;

    if (resultIndex != -1) {
        cout << "Linear Search: Element " << searchItem << " found at index " << resultIndex << endl;
    } else {
        cout << "Linear Search: Element " << searchItem << " not found." << endl;
    }


    searchItem = 20;
    resultIndex = linearSearch(values, searchItem);
    if (resultIndex != -1) {
        cout << "Linear Search: Element " << searchItem << " found at index " << resultIndex << endl;
    } else {
        cout << "Linear Search: Element " << searchItem << " not found." << endl;
    }

    return 0;
}
/*OUTPUT 
Array: 34 4 89 5 4 10 
Linear Search: Element 4 found at index 1
Linear Search: Element 20 not found
*/