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

int main() {
    Book b1("C++", 100);
    Book b2("Python", 120);
    Book b3("Java", 130);
    Book b4(b1);

    list<Book> list;
    list.push_back(b1);
    list.push_back(b2);
    list.push_back(b3);

    Book bookToFind("C++", 110); //new edition
    return 0;
}