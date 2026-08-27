class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
               int ans = 0;
               for (int j = i; j<nums.size(); j++) {
                   if (nums[j]==0) break;
                   ans++;
               }
               res = max(res,ans);
    
        }
        return res;
    }
};