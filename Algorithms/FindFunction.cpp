//
// Created by Ishaan Jain on 12-08-2020.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = {1, 10, 11, 9, 100};
    int n = sizeof(arr) / sizeof(int);

    //Search --> find

    int key;
    cin >> key;

    auto it = find(arr, arr + n, key);
    int index = it - arr;
    if (index == n) {
        cout << key << " not present" << endl;
    } else {
        cout << "Present at:" << index << endl;
    }
    return 0;
}