#include <iostream>

int main() {
    double num1, num2;
    char op;

    std::cout << "Введите первое число:1111111111111111111 ";
    std::cin >> num1;
    std::cout << "Введите операцию (+, -): ";
    std::cin >> op;
    std::cout << "Введите второе число: ";
    std::cin >> num2;

    switch (op) {
    case '+':
        std::cout << "Результат: " << num1 + num2 << std::endl;
        break;
    case '-':
        std::cout << "Результат: " << num1 - num2 << std::endl;
        break;
    return 0;
}
