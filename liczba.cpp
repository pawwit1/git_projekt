#include <iostream>
int main() {
    int liczba;
    std::cin >> liczba;
    if (liczba <= 0) {
            std::cout << "Podana liczba nie jest dodatnią liczbą naturalną." << std::endl;
                    return 1;
                        }
    std::cout << liczba << std::endl;
    return 0;
}
