class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        set<int> st  ; 
        int n = nums.size() ; 

        int l =0; 

        for(int i =0;i< n ; i++ ){

            if(st.find(nums[i]) != st.end()){
                return true ; 
            }
            
            st.insert(nums[i]) ; 

            if(i-l + 1 > k ){
                st.erase(nums[l]) ; 
                l++; 
            }


        }
return false  ; 
    }
};