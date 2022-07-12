/*
    Question No. 4
    Question Title: Given an array which consists of only 0, 1 and 2. 
    Sort the array without using any sorting algorithm
    Topic: Array
    DSA Sheet: Love Babbar's Final450
    Time Complexity: O(N)
    Space Complexity: O(1)
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

    int low{0}, mid{0}, high{n - 1};
    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            ++low;
            ++mid;
        } else if(nums[mid] == 1){
            ++mid;
        } else{
            swap(nums[mid], nums[high]);
            --high;
        }
    }

    for(int num : nums){
        cout << num << " ";
    }
    /* End: Write your code here */

    cout << endl;
    return 0;
}
