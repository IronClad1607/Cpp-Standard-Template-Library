//
// Created by Ishaan Jain on 12-08-2020.
//
#include <bits/stdc++.h>

using namespace std;

//defining a comparator
bool compare(int a, int b) {
    return a > b;
}

int main() {

    int n;
    int a[1000];

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a, a + n, compare);

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

