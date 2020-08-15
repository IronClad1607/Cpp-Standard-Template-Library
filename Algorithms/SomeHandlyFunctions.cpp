//
// Created by Ishaan Jain on 15-08-2020.
//

#include <bits/stdc++.h>

typedef int i;
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    swap(a, b);

    cout << a << " " << b << endl;

    cout << "Max:" << max(a, b) << endl;
    cout << "Min:" << min(a, b) << endl;

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    reverse(arr, arr + n);
    for (int x:arr) {
        cout << x << " ";
    }
}

