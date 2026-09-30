class Solution {
public:



    vector<int> productExceptSelf(vector<int>& nums) {

            int n = nums.size() ; 
            vector<int> out(n ,  1) ; 
            int lef  = 1; 

            for(int i =0 ; i<n ; i++) {
                out[i] = lef ; 
                lef *= nums[i] ; 
            }

            int rig = 1; 

            for(int i = n-1  ; i>=0 ; i--){
                out[i] *= rig ; 
                rig *= nums[i] ; 
            }

        //    for(int i =0 ; i<n ; i++){
        //     out = lef * rig ; 
        //    }

            return out ; 
        
    }
};
