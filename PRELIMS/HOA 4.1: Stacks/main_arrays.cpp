#include <iostream>

// set a constant limit for the stack
char ParenStack[100];
int top = -1;

// prototyping
bool isEmpty();
bool BalancedSymbols(char open, char close);
void push(char c);
char pop();

// main/driver code
int main() { 
    // input an expression
    char s[100]; 
    std::cout << "Enter expression: "; 
    std::cin >> s; 
    
    // determining if expression is balanced
    bool balanced = true; 
    for (int i = 0; s[i] != '\0'; i++) { 
        char ch = s[i]; 
        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') { 
            char open = pop(); 
            if (!BalancedSymbols(open, ch)) { 
                balanced = false;
                break; 
            } 
        } 
    } 
    // output if expression is balanced or not
    if (balanced && top == -1) 
        std::cout << "The expression is balanced.";
    else 
        std::cout << "The expression is not balanced."; 
    return 0;
}

// function if top is -1
bool isEmpty() {
    // top is -1
    if (top == -1) {
        return true;
    }
    return false;
}

// function to determine if expression is balanced
bool BalancedSymbols(char open, char close) { 
    if (open == '(' && close == ')') return true; 
    if (open == '{' && close == '}') return true; 
    if (open == '[' && close == ']') return true; 
    return false;
}

// function to push charcaters inside the stack
void push(char c) { 
    ParenStack[++top] = c;
}

// function to remove 
char pop() { 
    if(isEmpty()) return true; 
    return ParenStack[top--];
}