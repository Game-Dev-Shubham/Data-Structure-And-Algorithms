#include <iostream>
#include <climits>
using namespace std;

int maximumSubarraySum(int arr[], int size) {
    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i = 0; i < size; i++) {
        currSum += arr[i];

        maxSum = max(currSum, maxSum);

        if(currSum < 0) {
            currSum = 0;
        }
    }

    return maxSum;
}

int main() {
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};

    cout << maximumSubarraySum(arr, 7);

    return 0;
}