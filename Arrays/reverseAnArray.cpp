/*
    Question No. 1
    Question Title: Reverse the array
    Topic: Array
    DSA Sheet: Love Babbar's Final450
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n{};
    cin >> n;

    vector<int> nums(n, 0);
    for (int i = 0; i < n; ++i){
        cin >> nums[i];
    }

    int i = 0, j = n - 1;
    while(i < j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        ++i;
        --j;
    }

    for (int i = 0; i < n; ++i){
        cout << nums[i] << " ";
    }

    cout << endl;
    return 0;
}
