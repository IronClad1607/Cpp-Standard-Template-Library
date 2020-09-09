//
// Created by Ishaan Jain on 15-08-2020.
//
#include <bits/stdc++.h>

using namespace std;

void displayVector(vector<int> vector) {
    for (int x:vector) {
        cout << x << " ";
    }

    cout << endl;
}

int main() {
    vector<int> v{1, 2, 3, 10, 15, 16};
    displayVector(v);

    //push_back
    v.push_back(20);
    displayVector(v);

    //pop_back
    v.pop_back();
    displayVector(v);

    //insert in between
    v.insert(v.begin() + 3, 5);
    displayVector(v);

    //insert a number multiple times
    v.insert(v.begin() + 3, 4, 5);
    displayVector(v);

    //erase in between
    v.erase(v.begin() + 3);
    displayVector(v);

    //erase in range
    v.erase(v.begin() + 2, v.begin() + 5);
    displayVector(v);
    return 0;
}

