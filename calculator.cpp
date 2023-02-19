#include <iostream>

int main () {

    char op;
    double num1;
    double num2;
    double result;

std:: cout << "┌─────────────────────CALCULATOR──────────────────────┐"  << std:: endl << std:: endl;

    //enter your operator
    std:: cin >> op;

    //enter your first number
    std:: cin >> num1; 

    //enter your second number
    std:: cin >> num2;

    switch(op){
        case '+':
        result = num1 + num2;
        std:: cout << "                      result: " << result << std:: endl << std:: endl;
        break;
        case '-':
        result = num1 - num2;
        std:: cout << "                      result: " << result << std:: endl << std:: endl;
        break;

         case '*':
        result = num1 * num2;
        std:: cout << "                      result: " << result << std:: endl << std:: endl;
        break;
         case '/':
        result = num1 / num2;
        std:: cout << "                      result: " << result << std:: endl << std:: endl;
        break;
        default:
        std:: cout << "             That wasn`t a valid response!" << std:: endl << std:: endl;
        break;
    }


        std:: cout << "└─────────────────────────────────────────────────────┘";

    return 0;
}
