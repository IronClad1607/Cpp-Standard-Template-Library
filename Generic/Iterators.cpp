//
// Created by Ishaan Jain on 28-06-2020.
//
#include <bits/stdc++.h>

using namespace std;

template<class ForwardIterator, class T>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key) {
    while (start != end) {
        if (*start == key) {
            return start;
        }

        start++;
    }
}

int main() {
    ios_base::sync_with_stdio(0);

    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(5);
    l.push_back(7);
    l.push_back(3);

    auto it = search(l.begin(), l.end(), 50);

    if (it == l.end()) {
        cout << "Element not found" << endl;
    } else {
        cout << *it << endl;
    }
    return 0;
}

