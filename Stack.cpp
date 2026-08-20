#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> nums;
    nums.push(1);
    nums.push(2);
    nums.push(3);

    nums.top();
    nums.pop();

    cout << "Stack size: " << nums.size() << endl;
    cout << "Stack is empty: " << nums.empty() << endl;

    while (!nums.empty()) {
        cout << nums.top() << " ";
        nums.pop();
    }
    cout << endl;

    cout << "Stack size: " << nums.size() << endl;
    cout << "Stack is empty: " << nums.empty() << endl;

    return 0;
}