//
// Created by Ishaan Jain on 12-08-2020.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = {20, 30, 40, 40, 40, 50, 100, 1100};
    int n = sizeof(arr) / sizeof(n);
    //Search in a sorted array
    int key;
    cin >> key;

    auto present = binary_search(arr, arr + n, key);
    if (present) {
        cout << "Present" << endl;
    } else {
        cout << "Absent" << endl;
    }

    //lower and upper bound function
    auto itLower = lower_bound(arr, arr + n, 40);
    cout << "Lower Bound of 40:" << itLower - arr << endl;

    auto itUpper = upper_bound(arr, arr + n, 40);
    cout << "Upper Bound iof 40:" << itUpper - arr << endl;

    //Freq of a item in an array
    cout << "Freq:" << itUpper - itLower << endl;

    return 0;
}
