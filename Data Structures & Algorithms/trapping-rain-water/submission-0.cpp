class Solution {
public:

/*

limit h sorter wall 

*/
    int trap(vector<int>& height) {
        
        int n = height.size() ; 
        int l =0 ; 
        int r = n - 1; 

        int l_h = height[l] ; 
        int r_h = height[r] ; 
        int res = 0; 

        while(l<r){

            if(l_h < r_h){
                l++;
            l_h =    max(l_h , height[l] ) ;
                res += l_h - height[l] ; 
            }else{

                r--; 
                r_h = max(r_h ,  height[r]) ; 
                res += r_h - height[r] ; 

            }

        }
return res ; 
    }
};
