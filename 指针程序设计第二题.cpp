
#include <iostream>
using namespace std;
#include <string>
#include <cmath>
int hexToDec(std::string hex) {
    int dec = 0;
    int power = 0;

    // 从字符串的末尾开始遍历
    for (int i = hex.length() - 1; i >= 0; --i) {
        char c = hex[i];

        // 如果字符是数字，则将其转换为对应的数值
        if (c >= '0' && c <= '9') {
            dec += (c - '0') * pow(16, power);
        }
        // 如果字符是字母，则将其转换为对应的数值
        else if (c >= 'A' && c <= 'F') {
            dec += (c - 'A' + 10) * pow(16, power);
        }

        ++power;
    }

    return dec;
}
int main() {
    std::string hexNumber;
    cin >> hexNumber;

    int decimalNumber = hexToDec(hexNumber);

    std::cout << "Hexadecimal: " << hexNumber << std::endl;
    std::cout << "Decimal: " << decimalNumber << std::endl;
    return 0;
}
