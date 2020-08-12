//
// Created by Ishaan Jain on 12-08-2020.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = {20, 30, 40, 50, 100, 1100};
    int n = sizeof(arr) / sizeof(n);
    //Search in a sorted array
    int key;
    cin >> key;

    auto present = binary_search(arr, arr + n, key);
    if (present) {
        cout << "Present";
    } else {
        cout << "Absent";
    }
    return 0;
}
