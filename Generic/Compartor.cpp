//
// Created by Ishaan Jain on 12-08-2020.
//

#include <bits/stdc++.h>

using namespace std;

class Book {
public:
    string name;
    int price;

    Book() {

    }

    Book(string name, int price) {
        this->price = price;
        this->name = name;
    }
};

template<class ForwardIterator, class T>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key) {
    while (start != end) {
        if (*start == key) {
            return start;
        }

        start++;
    }

    return end;
}

class BookCompare {
public:
    bool operator()(Book A, Book B) {
        cout << "Inside compare fn" << endl;
        if (A.name == B.name) {
            return true;
        }
        return false;
    }
};

int main() {
    Book b1("C++", 100); //old edition
    Book b2("Python", 120);
    Book b3("Java", 130);
    Book b4(b1);

    list<Book> list;
    list.push_back(b1);
    list.push_back(b2);
    list.push_back(b3);

    Book bookToFind("C++", 110); //new edition

    BookCompare cmp;
    if (cmp(b1, bookToFind)) {
        cout << "True Same Books!" << endl;
    }
    return 0;
}