class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n = nums.size() ; 
        int l =0; 
        int r = n-1  ; 

        int mid = (l+r) / 2  ; 

       
       for(int i =0 ; i<n ; i++){

            if(nums[i] == target){
                return i ; 
            }else{


                while(l < r){

                    if(nums[i] < nums[mid]){
                        l++; 
                    }else{
                        r--; 
                    }

                }


            }

       }

        return -1; 

    }
};
