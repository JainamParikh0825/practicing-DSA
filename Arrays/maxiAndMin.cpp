/*
    Question No. 2
    Question Title: Find the maximum and minimum element in an array
    Topic: Array
    DSA Sheet: Love Babbar's Final450
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<limits>

using namespace std;

int main(){
    /* Start: Write your code here */
    int n{};
    cin >> n;

    vector<int> nums(n, 0);
    for (int i = 0; i < n; ++i){
        cin >> nums[i];
    }

    int maximum = INT32_MIN;
    int minimum = INT32_MAX;

    for (int i = 0; i < n; ++i){
        if(nums[i] >= maximum)
            maximum = nums[i];

        if(nums[i] <= minimum)
            minimum = nums[i];
    }

    cout << maximum << " " << minimum;
    /* End: Write your code here */

    cout << endl;
    return 0;
}
