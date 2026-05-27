#include <iostream>
using namespace std;

int convertToBinary(int number) {
    int ans = 0;
    int power = 1;

    while(number > 0) {
        int rem = number % 2;
        number /= 2;

        ans += rem * power;
        power *= 10;
    }

    return ans;
}

int main() {
    int number = 10;

    cout << convertToBinary(number);

    return 0;
}