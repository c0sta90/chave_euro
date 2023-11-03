#include <iostream>
#include <cstdlib>
#include <ctime>

void key_euro(int num[], int star[]) {
    int i;
    srand(time(NULL)); 

    for (i = 0; i < 5; i++) {
        num[i] = rand() % 50 + 1;
    }

    for (i = 0; i < 2; i++) {
        star[i] = rand() % 12 + 1;
    }
}

int main() {
    int num[5];
    int star[2];
    int i;

    key_euro(num, star);

    std::cout << "Números: ";
    for (i = 0; i < 5; i++) {
        std::cout << num[i] << " ";
    }

    std::cout << "\nEstrela: ";
    for (i = 0; i < 2; i++) {
        std::cout << star[i] << " ";
    }

    return 0;
}
