class Solution {
public:
    int maxArea(vector<int>& heights) {

        int n = heights.size() ; 
        int l = 0 ;
        int r= n -1  ; 
        int h = 0; 
        int maxi  =0 ; 
        while(l< r){
            int wd = r  -l ; 
                h =  min(heights[l] , heights[r]) ; 
                int area = h * wd  ; 
                maxi =  max(maxi , area ) ; 
                if(heights[l] < heights[r]){
                    l++; 
                }else{
                    r--; 
                }
        }
return maxi ;
    }
};
