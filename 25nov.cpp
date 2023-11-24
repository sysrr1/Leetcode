#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(begin(piles),end(piles));
        int i=0, j= piles.size()-1;
        int ans = 0;
        while(i<=j)
        {
             ans = ans+piles[j-1];
             i++;
             j-=2;
        }
        return ans;
        
    }
};