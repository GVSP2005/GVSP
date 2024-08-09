/*#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int lengthOfLIS(vector<int>& nums) {
    if (nums.empty()) return 0;

    vector<int> dp;
    for (int num : nums) {
        auto it = lower_bound(dp.begin(), dp.end(), num);
        if (it == dp.end()) {
            dp.push_back(num);
        } else {
            *it = num;
        }
        for(auto x:dp)cout<<x<<" ";cout<<endl;
    }
    
    return dp.size();
}

int main() {
    vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
    cout << "Length of LIS: " << lengthOfLIS(nums) << endl;

    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    vector <int> dp;
    for(int i=0;i<n;i++){
        auto it=lower_bound(dp.begin(),dp.end(),a[i]);
        if(it==dp.end())dp.push_back(a[i]);
        else *it=a[i];
    }
    cout<<dp.size()<<endl;
}