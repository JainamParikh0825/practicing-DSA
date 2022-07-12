/*
    Question No. 5
    Question Title: Move all the negative elements to one side of the array
    Topic: Array
    DSA Sheet: Love Babbar's Final450
    Time Complexity:
    Space Complexity:
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    /* Start: Write your code here */
    int n{};
    cin >> n;

    vector<int> nums(n, 0);
    for (int i = 0; i < n; ++i){
        cin >> nums[i];
    }

    int i = 0, j = n - 1;
    while(i <= j){
        if(nums[i] <= -1 && nums[j] <= -1)
            ++i;
        else if(nums[i] > -1 && nums[j] <= -1){
            swap(nums[i], nums[j]);
            ++i;
            --j;
        } else if(nums[i] > -1 && nums[j] > -1)
            --j;
        else{
            ++i;
            --j;
        }
    }

    for(int num : nums){
        cout << num << " ";
    }
    /* End: Write your code here */

    cout << endl;
    return 0;
}
