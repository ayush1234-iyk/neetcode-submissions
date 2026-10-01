class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();

        if(n == 0)
            return 0;

        sort(nums.begin(), nums.end());

        int cnt = 1;
        int ans = 1;

        for(int i = 0; i < n - 1; i++) {

            if(nums[i + 1] - nums[i] == 1) {
                cnt++;
            }
            else if(nums[i + 1] == nums[i]) {
                continue;
            }
            else {
                cnt = 1;
            }

            ans = max(ans, cnt);
        }

        return ans;
    }
}; 
