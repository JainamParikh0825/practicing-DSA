/*
    Question No. 7
    Question Title:
    Topic:
    DSA Sheet: Love Babbar's Final450
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

int main(){
    /* Start: Write your code here */
    int n{};
    cin >> n;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; ++i){
        cin >> nums[i];
    }

    int lastElement = nums[n - 1];
    for (int i = n - 1; i >= 0; --i){
        nums[i] = nums[i - 1];
    }

    nums[0] = lastElement;

    for(int num : nums){
        cout << num << " ";
    }
    /* End: Write your code here */

    cout << endl;
    return 0;
}
