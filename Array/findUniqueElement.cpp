#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int findSingalOne(vector<int>num){

    int ans = 0;

    for(int value : num){

        ans = ans ^ value;
    }

    return ans;
}

int main(){

    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(4);

    cout << "Single Element : "
         << findSingalOne(vec);

    return 0;
}