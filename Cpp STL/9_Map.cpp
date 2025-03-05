#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> m;

    // Inserting elements into the map
    m[1] = "babbar";
    m[13] = "kumar";
    m[2] = "love";
    m.insert({5, "bheem"});

    // Displaying the map before erasing
    cout << "Before erase:" << endl;
    for (auto i : m) {
        cout << i.first << " -> " << i.second << endl;
    }

    // Checking if a key exists
    cout << "Finding -13 -> " << m.count(-13) << endl;

    // Removing an element from the map
    m.erase(13);

    // Displaying the map after erasing
    cout << "After erase:" << endl;
    for (auto i : m) {
        cout << i.first << " -> " << i.second << endl;
    }
    cout << endl;

    // Finding a specific key and printing elements from that key onwards
    auto it = m.find(5);
    cout << "Elements from key 5 onwards:" << endl;
    for (auto i = it; i != m.end(); i++) {
        cout << i->first << " -> " << i->second << endl;
    }

    return 0;
}
