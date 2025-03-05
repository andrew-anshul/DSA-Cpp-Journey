#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s;

    // Inserting elements (duplicates are ignored)
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(5); // Duplicate, will be ignored

    cout << "Set elements: ";
    for (auto i : s) {
        cout << i << " ";
    }
    cout << endl;

    // Erase an element
    auto it = s.begin();
    it++;
    s.erase(it); // Erasing second element

    cout << "After erase: ";
    for (auto i : s) {
        cout << i << " ";
    }
    cout << endl;

    // Checking if an element exists
    cout << "-5 is present or not -> " << s.count(-5) << endl;

    // Finding an element
    auto itr = s.find(5);
    cout << "Elements from 5 onwards: ";
    for (auto it = itr; it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
