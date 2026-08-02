#include <iostream>
#include <stack>
#include <string>

bool isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}

int performOperation(char op, int operand1, int operand2) {
    switch (op) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            if (operand2 != 0) {
                return operand1 / operand2;
            } else {
                std::cerr << "Error: Division by zero." << std::endl;
                exit(1);
            }
        case '^':
            int result = 1;
            for (int i = 0; i < operand2; i++) {
                result *= operand1;
            }
            return result;

    }
}

int evaluatePostfixExpression(const std::string& expression) {
    std::stack<int> operandStack;
    for (char ch : expression) {
        if (isOperator(ch)) {
            if (operandStack.size() < 2) {
                std::cerr << "Error: Invalid postfix expression." << std::endl;
                exit(1);
            }
            int operand2 = operandStack.top();
            operandStack.pop();
            int operand1 = operandStack.top();
            operandStack.pop();
            int result = performOperation(ch, operand1, operand2);
            operandStack.push(result);
        } else {
            if (std::islower(ch)) { // Changed from std::isalpha(ch)
                char var;
                std::cout << "Enter the value of " << ch << ": ";
                std::cin >> var;
                operandStack.push(var - '0');
            } else if (std::isdigit(ch)) {
                operandStack.push(ch - '0');
            } else {
                std::cerr << "Error: Invalid character in the expression." << std::endl;
                exit(1);
            }
        }
    }
    if (operandStack.size() != 1) {
        std::cerr << "Error: Invalid postfix expression." << std::endl;
        exit(1);
    }
    return operandStack.top();
}

int main() {
    std::string expression;
    std::cout << "Enter a postfix expression: ";
    std::cin >> expression;

    int result = evaluatePostfixExpression(expression);

    std::cout << "Output: " << result << std::endl;

    return 0;
}
