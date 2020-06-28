#include <bits/stdc++.h>

using namespace std;

int search(int arr[], int n, int key) {
    for (int p = 0; p < n; p++) {
        if (arr[p] == key) {
            return p + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 10, 12};
    int n = sizeof(arr) / sizeof(int);
    int key = 10;

    cout << search(arr, n, key) << endl;
    return 0;
}
