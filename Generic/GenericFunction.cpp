#include <bits/stdc++.h>

using namespace std;

template<typename T>
int search(T arr[], int n, T key) {
    for (int p = 0; p < n; p++) {
        if (arr[p] == key) {
            return p + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 10, 12};
    int nInt = sizeof(arr) / sizeof(int);
    int key = 10;
    cout << search(arr, nInt, key) << endl;

    float b[] = {1.1, 1.2, 1.3, 1.4};
    int nFloat = sizeof(b) / sizeof(float);
    float floatKey = 1.2;
    cout << search(b, nFloat, floatKey) << endl;
    return 0;
}
