class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size() ; 
        int cnt =  1;  
        int ans = 1 ; 

        if(n == 0 ){
            return  0 ; 
        }

        sort(nums.begin() , nums.end()) ; 

        for(int i= 0 ; i<n-1  ; i++){
            if(nums[i+1] - nums[i] ==  1){
                cnt++;
            }else if(nums[i] == nums[i+1]){
                continue ;  
            }else{
                cnt = 1 ; 
            }

            ans = max(ans ,  cnt) ; 
        }
return ans  ; 
    }
};
