/*
    Question No. 6
    Question Title: Find the Union and Intersection of the two sorted arrays.
    Topic: Array
    DSA Sheet: Love Babbar's Final450
    Time Complexity: O(n + m)
    Space Complexity: O(n + m)
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    /* Start: Write your code here */
    int n{}, m{};
    cin >> n >> m;

    vector<int> a(n, 0), b(m, 0);
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }

    for (int i = 0; i < m; ++i){
        cin >> b[i];
    }

    unordered_set<int> result;
    for (int i = 0; i < n; ++i){
        result.insert(a[i]);
    }

    for (int i = 0; i < m; ++i){
        result.insert(b[i]);
    }

    cout << result.size(); 
    /* End: Write your code here */

    cout << endl;
    return 0;
}
