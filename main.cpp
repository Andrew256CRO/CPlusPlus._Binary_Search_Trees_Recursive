#include <iostream>
#include"Functii.hpp"

int main()
{
    nod* arbore = 0;
    int x;
    std::cin >> x;
    while (x) {
        inserare(arbore, x);
        std::cin >> x;
    }
    std::cout << "Parcurgere inordine: "; inordine(arbore); std::cout << std::endl;
    std::cout << "Parcurgere preordine: "; preordine(arbore); std::cout << std::endl;
    std::cout << "Parcurgere postordine: "; postordine(arbore); std::cout << std::endl;
    if (cautare(arbore, 4)) {
        std::cout << "S-a gasit valoarea 4." << std::endl;
    }
    else {
        std::cout << "Nu s-a gasit numarul." << std::endl;
    }
    return 0;
}

