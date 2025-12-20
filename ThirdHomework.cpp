#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");

    std::cout << std::boolalpha;
    bool a, b, c;

    // Таблица для оператора || (логическое ИЛИ)
    std::cout << "Оператор: ||" << std::endl;

    a = true;  b = true;
    c = a || b;
    std::cout << a << " " << b << " " << c << std::endl;

    a = false; b = true;
    c = a || b;
    std::cout << a << " " << b << " " << c << std::endl;

    a = true;  b = false;
    c = a || b;
    std::cout << a << " " << b << " " << c << std::endl;

    a = false; b = false;
    c = a || b;
    std::cout << a << " " << b << " " << c << std::endl;

    std::cout << std::endl;

    // Таблица для оператора && (логическое И)
    std::cout << "Оператор: &&" << std::endl;

    a = true;  b = true;
    c = a && b;
    std::cout << a << " " << b << " " << c << std::endl;

    a = false; b = true;
    c = a && b;
    std::cout << a << " " << b << " " << c << std::endl;

    a = true;  b = false;
    c = a && b;
    std::cout << a << " " << b << " " << c << std::endl;

    a = false; b = false;
    c = a && b;
    std::cout << a << " " << b << " " << c << std::endl;

    return EXIT_SUCCESS;
}
