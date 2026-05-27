#include <iostream>
#include <vector>
using namespace std;

int findSingleElement(vector<int> nums) {
    int ans = 0;

    for(int value : nums) {
        ans ^= value;
    }

    return ans;
}

int main() {
    vector<int> nums = {1, 2, 2, 1, 3, 4, 4};

    cout << findSingleElement(nums);

    return 0;
}