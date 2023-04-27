#include <iostream>

int main() {
    int A = 8;
    int B = 9;

    std::cout << "Antes del intercambio:" << std::endl;
    std::cout << "A = " << A << std::endl;
    std::cout << "B = " << B << std::endl;

    int temp = A;
    A = B;
    B = temp;

    std::cout <<"Intercambio:" << std::endl;
    std::cout << "A = " << A << std::endl;
    std::cout << "B = " << B << std::endl;

    return 0;
}