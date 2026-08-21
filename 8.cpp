#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    string s = "(1+ (2*3)+((8)/4)) +1";
    stack<char> s_stack; 
    vector<int> counter;
    int k = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            k++;
            s_stack.push('(');
        } else if (s[i] == ')') {
            k--;
            if (!s_stack.empty()) {
                s_stack.pop();
            }
        }
        counter.push_back(k);
    }

    int max_val = counter[0];
    for (int i = 1; i < counter.size(); i++) {
        if (counter[i] > max_val) {
            max_val = counter[i];
        }
    }

    cout << "Max: " << max_val << endl;
    return 0;
}