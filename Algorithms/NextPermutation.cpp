//
// Created by Ishaan Jain on 15-08-2020.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    //rotate
    rotate(v.begin(), v.begin() + 1, v.end());
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }

    //nextPermutation
    next_permutation(v.begin(), v.end());

    for (int x:v) {
        cout << x << " ";
    }
    return 0;
}

