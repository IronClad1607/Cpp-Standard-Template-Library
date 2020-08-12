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

//Template + Iterators + Comparators
template<class ForwardIterator, class T, class Compare>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key, Compare cmp) {
    while (start != end) {
        if (cmp(*start, key)) {
            return start;
        }

        start++;
    }

    return end;
}

class BookCompare {
public:
    bool operator()(Book A, Book B) {
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

    list<Book> listBook;
    listBook.push_back(b1);
    listBook.push_back(b2);
    listBook.push_back(b3);

    Book bookToFind("C", 110); //new edition

    BookCompare cmp;

    auto it = search(listBook.begin(), listBook.end(), bookToFind, cmp);

    if (it != listBook.end()) {
        cout << "Book found in the library!" << endl;
    } else {
        cout << "Book not Found!" << endl;
    }

    /*if (cmp(b1, bookToFind)) {
        cout << "True Same Books!" << endl;
    }*/


    return 0;
}