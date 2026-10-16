class Solution {
public:

/*
  
  nearest integr khojna h sqrt of x ka 


*/

    int mySqrt(int x) {

        long long  l = 0;
        long long  r  =  x   ; 
        long long  ans = 0; 

         while(l<=r){

            long long  mid =  (l+ r) /  2 ; 

            if(mid * mid  == x){
                return mid ; 
            }else if(mid * mid < x){
                ans = mid ;  
            l = mid + 1; 
            }else{
                r = mid -1 ; 
            }
         } 
return ans ; 
    }
};