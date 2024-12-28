#include <iostream>
bool czy_doskonala(int liczba) {
    int suma = 0;
        for (int i = 1; i < liczba; ++i) {
                if (liczba % i == 0) suma += i;
                    }
                        return suma == liczba;
                        }
                        int main() {
                            int liczba;
                                std::cin >> liczba;
                                if (liczba <= 0) {
                                            std::cout << "Podana liczba nie jest dodatnią liczbą naturalną." << std::endl;
                                                                return 1;
                                                                                        }
                                    std::cout << liczba << " jest ";
                                        if (!czy_doskonala(liczba)) std::cout << "nie ";
                                            std::cout << "liczbą doskonałą" << std::endl;
                                                return 0;
                                                }
