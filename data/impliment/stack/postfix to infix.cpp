//this code is rirht
#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Function to check if a character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/'||c== '^');
}

// Function to convert postfix expression to infix
string postfixToInfix(const string& postfix) {
    stack<string> operandStack;

    for (char token : postfix) {
        if (isalnum(token)) { // Operand
            string operand(1, token);
            operandStack.push(operand);
        } else if (isOperator(token)) { // Operator
            if (operandStack.size() < 2) {
                cerr << "Invalid postfix expression." << endl;
                return "";
            }

            string operand2 = operandStack.top();
            operandStack.pop();
            string operand1 = operandStack.top();
            operandStack.pop();

            string infixExpression = "(" + operand1 + token + operand2 + ")";
            operandStack.push(infixExpression);
        } else {
            cerr << "Invalid character in postfix expression." << endl;
            return "";
        }
    }

    if (operandStack.size() != 1) {
        cerr << "Invalid postfix expression." << endl;
        return "";
    }

    return operandStack.top();
}

int main() {
    string postfixExpression;
    cout << "Enter a postfix expression: ";
    cin >> postfixExpression;

    string infixExpression = postfixToInfix(postfixExpression);
    if (!infixExpression.empty()) {
        cout << "Infix expression: " << infixExpression << endl;
    }

    return 0;
}

