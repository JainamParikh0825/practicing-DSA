/*
    Question No. 3
    Question Title: Find the "Kth" max and min element of an array
    Topic: Array & Heaps
    DSA Sheet: Love Babbar's Final450
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
    /* Start: Write your code here */
    int n{};
    cin >> n;

    vector<int> nums(n, 0);
    for (int i = 0; i < n; ++i){
        cin >> nums[i];
    }

    int k{};
    cin >> k;

    priority_queue<int> maxHeap;

    for (int i = 0; i < n; ++i){
        maxHeap.push(nums[i]);
        if(maxHeap.size() > k)
            maxHeap.pop();
    }

    cout << maxHeap.top();
    /* End: Write your code here */

    cout << endl;
    return 0;
}
