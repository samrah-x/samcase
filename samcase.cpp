#include <iostream>
#include <string>

std::string convertToSamCase(const std::string& str) {
    std::string converted;
    for (char c : str) {
        converted += tolower(c);
    }
    for (int i = 0 ; i < str.length(); i++) {
        if (i % 2 != 0) {
            if (converted[i] <= 122 && converted[i] >= 97) {
                converted[i] -= 32;
            }
            // else if (converted[i] <= 90 && converted[i] >= 65) {
            //     converted[i] += 32;
            // }
        }
        else if (converted[i] == 'i') {
            converted[i] = 'i';
        }
        else if (converted[i] == 'l') {
            converted[i] = 'L';
        }

    }
    return converted;
} 

int main() {
    std::string str;
    std::getline(std::cin, str);
    std::cout << convertToSamCase(str);
}