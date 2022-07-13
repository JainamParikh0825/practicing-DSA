/*
    Question No. 8
    Question Title: Find Largest sum contiguous Subarray
    Topic: Array
    DSA Sheet: Love Babbar's Final450
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    /* Start: Write your code here */
    int n{};
    cin >> n;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; ++i){
        cin >> nums[i];
    }

    int sum{0}, maxSum{nums[0]};
    for (int i = 0; i < n; ++i){
        sum += nums[i];
        maxSum = max(sum, maxSum);
        if(sum < 0)
            sum = 0;
    }

    cout << maxSum;
    /* End: Write your code here */

    cout << endl;
    return 0;
}
