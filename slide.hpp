#ifndef SLIDE_H
#define SLIDE_H

#include <vector>

void array_shift(std::vector<int>& arr, size_t shifts) {
    size_t n = arr.size();
    if (n == 0 || shifts == 0) return;

    shifts = shifts % n; 
    std::rotate(arr.begin(), arr.begin() + shifts, arr.end());
}

#endif 
