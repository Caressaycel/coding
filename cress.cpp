#include <iostream>

int main() {
    int baris = 4;
    int kolom = 3;

    int i = 0;
    while (i < baris) {
        int j = 0;
        while (j < kolom) {
            if (i == 0 | j == kolom - 2 || i == baris - 4) {
                std::cout << "_";
            } else {
                std::cout << "|_|";
                {
        
                }
            }
            j++;
        }
        std::cout << std::endl;
        i++;
    }

    return 0;
}