#include <iostream> 
using namespace std;
int main() {
    int a, b, c, d;
    int x, y;
    std::cin >> a >> b >> c >> d;
    x = ((((a << 4) + a) + ((c << 8) + (c << 7) - (c << 6) - (c << 3))) >> 5) - ((b << 7) - (b << 3)) + ((d << 7) - d);
    y = (17 * a + 312 * c) / 32 - b * 120 + d * 127;
    std::cout << x << " " << y;
    return 0;
}
/*#include <iostream>
#include <bitset>
#include <string>
#include <fstream>

// Функція для шифрування
void encrypt(std::string text[8], unsigned short rez[8][8]) {
    short i, j, l, m;

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            unsigned char c;
            unsigned short r, t, b;
            r = 0;
            c = text[i][j];

            r |= i; // Номер рядка
            r |= j << 3; // Позиція символа в рядку

            t = 1;
            b = 0;
            for (l = 0; l < 7; l++) {
                if (r & t) {
                    if (b == 0) b = 1; else b = 0;
                }
                t <<= 1;
            }
            r |= b << 6; // Біт парності

            r |= ((int)c << 7); // ASCII-код

            t = 1;
            b = 0;
            for (m = 7; m < 16; m++) {
                if (r & t) {
                    if (b == 0) b = 1; else b = 0;
                }
                t <<= 1;
            }
            r |= b << 15; // Біт парності
            rez[i][j] = r;
        }
    }
}

// Функція для дешифрування
void decrypt(unsigned short rez[8][8], std::string decryptedText[8]) {
    short i, j;

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            unsigned short r = rez[i][j]&011111111000000b;
            unsigned short ascii = r >> 7; // Відокремлюємо ASCII-код
            decryptedText[i][j] = ascii;
        }
    }
}

int main() {
    std::string text[8];
    unsigned short rez[8][8];

    for (int i = 0; i < 8; i++) {
        std::cout << "vvedit ryadok " << i + 1 << ": ";
        std::getline(std::cin, text[i]);
    }

    for (int i = 0; i < 8; i++) {
        while (text[i].length() < 8) {
            text[i] += ' ';
        }
    }

    encrypt(text, rez);

    std::ofstream inf("binary.dat", std::ios::binary);
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            std::bitset<16> binary(rez[i][j]);
            std::cout << binary << std::endl;
            inf.write(reinterpret_cast<const char*>(&rez[i][j]), sizeof(rez[i][j]));
        }
    }
    inf.close();

    // Дешифрування (при потребі)
    std::string decryptedText[8];
    decrypt(rez, decryptedText);

    std::cout << "deshifrovaniy text: " << std::endl;
    for (int i = 0; i < 8; i++) {
        std::cout << decryptedText[i] << std::endl;
    }

    return 0;
}*/
