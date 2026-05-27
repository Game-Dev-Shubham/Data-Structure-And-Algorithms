#include <iostream>
using namespace std;

int convertToDecimal(int number) {
    int power = 1;
    int ans = 0;

    while(number > 0) {
        int rem = number % 10;

        ans += rem * power;

        number /= 10;
        power *= 2;
    }

    return ans;
}

int main() {
    int binaryNumber = 1010;

    cout << convertToDecimal(binaryNumber);

    return 0;
}