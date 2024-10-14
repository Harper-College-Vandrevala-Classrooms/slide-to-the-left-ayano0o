#include <iostream>
#include <vector>
#include <cassert>
#include "slide.hpp"

using namespace std;

int main() {
    
    size_t s, shifts;

    cout << "Enter array size: " << endl;
    cin >> s;

    vector<int> arr(s);
    cout << "Enter array elements: " << endl;
    for (size_t i = 0; i < s; ++i) {
        cin >> arr[i];
    }

    cout << "Number of shifts: " << endl;
    cin >> shifts;

    array_shift(arr, shifts);

    cout << "Array after " << shifts << " left shifts: " << endl;
    for (size_t i = 0; i < s; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> test_arr(5);  
    test_arr[0] = 1;
    test_arr[1] = 2;
    test_arr[2] = 3;
    test_arr[3] = 4;
    test_arr[4] = 5;

    array_shift(test_arr, 2);

    vector<int> real_arr(5); 
    real_arr[0] = 3;
    real_arr[1] = 4;
    real_arr[2] = 5;
    real_arr[3] = 1;
    real_arr[4] = 2;

    assert((test_arr == real_arr) && "Test failed: 2 shifts");

    cout << "All tests passed" << endl;

    return 0;
}
