#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    while(1) {
        string msg;
        stack<char> s;
        
        getline(cin, msg);
        if(msg == ".") {
            break;
        }

        bool b = true;
        for (int i = 0; i < msg.size(); i++) {
            if (msg[i] == '(' || msg[i] == '[') {
                s.push(msg[i]);
            }
            else if (msg[i] == ')') {
                if (!s.empty() && s.top() == '(') {
                    s.pop();
                } else {
                    b = false;
                    break;
                }
            }
            else if (msg[i] == ']') {
                if (!s.empty() && s.top() == '[') {
                    s.pop();
                } else {
                    b = false;
                    break;
                }
            }
        }
        cout << ((s.empty() && b) ? "yes\n" : "no\n");
    }
}