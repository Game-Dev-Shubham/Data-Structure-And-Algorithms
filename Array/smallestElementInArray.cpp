#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

int findSmallestOne(int arr[],int size){

    int smallest = INT_MAX;

    for(int i = 0; i < size; i++){

        if(smallest > arr[i]){
            smallest = arr[i];
        }
    }

    return smallest;
}

int main(){

    int arr[] = {5,2,9,1,7};

    int size = 5;

    cout << "Smallest Element : "
         << findSmallestOne(arr,size);

    return 0;
}