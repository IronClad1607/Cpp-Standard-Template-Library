//
// Created by Ishaan Jain on 15-08-2020.
//
#include <bits/stdc++.h>

using namespace std;

int main() {

    //Ways to initiate a vector
    vector<int> a;
    vector<int> b(5, 10);
    vector<int> c(b.begin(), b.end());
    vector<int> d{1, 2, 4, 5, 13, 12};

    //Ways to Iterate
    //Classic For loop
    for (int i = 0; i < c.size(); ++i) {
        cout << c[i] << " ";
    }
    cout<<endl;

    //With Pointers
    for (auto it = c.begin(); it != c.end(); it++) {
        cout << (*it) << " ";
    }
    cout<<endl;

    //For each loop
    for (int x:d) {
        cout << x << " ";
    }
    cout<<endl;

    return 0;
}
