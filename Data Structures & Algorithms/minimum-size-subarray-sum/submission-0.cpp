class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n = nums.size()  ; 
        int l =0 ; 
        int mini = INT_MAX; 
        int sum = 0 ; 

        for(int i = 0 ; i<n ; i++){
            sum += nums[i] ; 
             while(sum >= target ){
            mini = min(mini , i - l +1 ) ; 
                 sum -= nums[l] ; 
                 l++;   
            }
        }
if(mini == INT_MAX){
    return 0; 
}
return mini ; 
    }
};