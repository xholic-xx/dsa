#include <iostream>
#include <stack>
#include <cctype>   // Fixed: Correct header for isalnum
#include <string>

using namespace std;

// 1. Helper function to check if character is an operand
int check_operand(char ch) {
    return isalnum(static_cast<unsigned char>(ch));
}

// 2. Added Precedence function (needed for your algorithm)
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

int main() {
    stack<char> s;
    string ifix, pfix = "";

    cout << "Enter an infix expression: " << endl;
    cin >> ifix;

    int len = ifix.length(); // Fixed: Modern way to get string length

    for (int i = 0; i < len; i++) {
        char current = ifix[i];

        // If it's an operand (letter/number), add it directly to postfix output
        if (check_operand(current)) {
            pfix += current; 
        } 
        // If it's an opening parenthesis, push to stack
        else if (current == '(') {
            s.push(current);
        } 
        // If it's a closing parenthesis
        else if (current == ')') {
            while (!s.empty() && s.top() != '(') {
                pfix += s.top(); // Get top element
                s.pop();         // Then pop it
            }
            if (!s.empty()) s.pop(); // Pop the '(' off the stack
        } 
        // If it's an operator (+, -, *, /, ^)
        else {
            while (!s.empty() && precedence(s.top()) >= precedence(current)) {
                pfix += s.top();
                s.pop();
            }
            s.push(current);
        }
    }

    // Fixed: Instead of 'goto', pop remaining operators left in the stack
    while (!s.empty()) {
        pfix += s.top();
        s.pop();
    }

    cout << "Postfix expression: " << pfix << endl;

    return 0;
}
