#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Max Heap (default behavior)
    priority_queue<int> maxi;

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout << "Max Heap Elements: ";
    while (!maxi.empty()) {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    cout << "Min Heap Elements: ";
    while (!mini.empty()) {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "Is Min Heap empty? -> " << (mini.empty() ? "Yes" : "No") << endl;

    return 0;
}
