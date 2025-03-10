#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<string> s;

    s.push("love");
    s.push("babbar");
    s.push("Kumar");

    cout << "Top Element -> " << s.top() << endl;

    s.pop();
    cout << "Top Element after pop -> " << s.top() << endl;

    cout << "Size of stack -> " << s.size() << endl;
    cout << "Empty or not -> " << s.empty() << endl;

    return 0;
}
