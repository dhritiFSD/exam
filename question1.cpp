#include <iostream>
#include <string>
using namespace std;

class Laptop {
private:
    string name;
    double price;
    string processor;

public:
    Laptop(string n, double p, string proc) {
        name = n;
        price = p;
        processor = proc;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Price: $" << price << endl;
        cout << "Processor: " << processor << endl << endl;
    }
};

int main() {
    Laptop laptop1("Dell XPS 15", 1899.99, "Intel Core i7");
    Laptop laptop2("MacBook Air", 1299.00, "Apple M2");

    laptop1.displayDetails();
    laptop2.displayDetails();

    return 0;
}
