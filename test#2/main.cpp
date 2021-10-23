#include <iostream>
#include <string>
#include <vector>
#include <exception>
using namespace std;

class Library {
public:
    string address = "14 St James's Square, St. James's, London";
    int id = 123;
    void printL() {
        cout << "Address: " << address << endl;
        cout << "Number: " << id << endl;
    }
};

class Book : public Library {
public:
    string author = "ERICH MARIA REMARQUE";
    string name = "All Quiet on the Western Front";
    void printB() {
        cout << "Name: " << name << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    int n = 10;
    vector<Book*> v;
    for (int i = 0; i < n; i++){
        auto a = new Book;
        v.push_back(a);
    };

    return 0;
}
