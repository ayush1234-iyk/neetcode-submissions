class Solution {
public:

 /*
 
 jb bhi buy krega tb buy ka val minimum hona chaiye 
 and sell maximum hona chaiye 

 1. mini lelo num[i] < mini -> mini= num[i]
 int prf = num[i] - mini 
 return the maximum profit 

 */

    int maxProfit(vector<int>& prices) {
        
        int n = prices.size()  ; 
        int mini = INT_MAX ;
        int maxi = 0; 

        for(int i =0 ; i<n ; i++){
            if(prices[i] < mini){
                mini = prices[i] ; 
            }
                maxi = max(maxi,  prices[i] - mini) ; 
        }
return maxi ; 
    }
};
