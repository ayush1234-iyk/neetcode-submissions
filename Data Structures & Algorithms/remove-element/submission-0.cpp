class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        vector<int> ans  ; 
        int n =  nums.size() ; 

        for(int i =0; i <n ; i++){
            if(nums[i] != val){
                ans.push_back(nums[i]) ; 
            } 
        }
        
    //   cout<<ans.size() ;
    nums = ans  ; 
      return ans.size() ; 

    }
};