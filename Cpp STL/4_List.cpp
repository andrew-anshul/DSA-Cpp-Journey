#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> l;
    list<int> n(5, 100);

    cout << "Printing n: ";
    for (int i : n) {
        cout << i << " ";
    }
    cout << endl;

    l.push_back(1);
    l.push_front(2);

    cout << "List elements: ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());

    cout << "After erase: ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size of list: " << l.size() << endl;

    return 0;
}
