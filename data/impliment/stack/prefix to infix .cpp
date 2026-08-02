//this code is rirht
#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

// Function to check if a character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' ||c== '^');
}

// Function to convert prefix expression to infix
string prefixToInfix(const string& prefix) {
    stack<string> operandStack;

    for (int i = prefix.length() - 1; i >= 0; i--) {
        char token = prefix[i];
        if (isalnum(token)) { // Operand
            string operand(1, token);
            operandStack.push(operand);
        } else if (isOperator(token)) { // Operator
            if (operandStack.size() < 2) {
                cerr << "Invalid prefix expression." << endl;
                return "";
            }

            string operand1 = operandStack.top();
            operandStack.pop();
            string operand2 = operandStack.top();
            operandStack.pop();

            string infixExpression = "(" + operand1 + token + operand2 + ")";
            operandStack.push(infixExpression);
        } else {
            cerr << "Invalid character in prefix expression." << endl;
            return "";
        }
    }

    if (operandStack.size() != 1) {
        cerr << "Invalid prefix expression." << endl;
        return "";
    }

    return operandStack.top();
}

int main() {
    string prefixExpression;
    cout << "Enter a prefix expression: ";
    cin >> prefixExpression;

    string infixExpression = prefixToInfix(prefixExpression);
    if (!infixExpression.empty()) {
        cout << "Infix expression: " << infixExpression << endl;
    }

    return 0;
}

