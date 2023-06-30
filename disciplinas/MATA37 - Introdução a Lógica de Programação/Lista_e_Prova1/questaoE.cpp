#include <iostream>

int main() {
    int num, cen, dez, uni;
    std::cin >> num;
    cen = num / 100;
    dez = num / 10 - cen * 10;
    uni = num - cen * 100 - dez * 10;
    std::cout << uni << " " << dez << " " << cen << std::endl;
}