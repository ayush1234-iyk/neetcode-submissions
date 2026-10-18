class Solution {
public:

    /*
    
    THESE ARE THE SOME CONDITION TO SOLVE THIS QUESTION 
    Initialize an empty stack.
For each asteroid, if it's positive or the stack is empty or the top is negative, push it.
If the asteroid is negative and the top is positive, compare sizes:
If the top is smaller, pop it and continue checking.
If they're equal, pop the top and discard the current asteroid.
If the top is larger, discard the current asteroid.
After processing all asteroids, the stack contains the survivors.

    */

    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack<int> st  ; 

        for(int i =0 ; i< asteroids.size() ; i++){
            int a = asteroids[i] ; 


            while(!st.empty() && a < 0 && st.top() > 0){
            int diff  = a + st.top() ; 

                if(diff < 0 ){
                    st.pop(); 
                }else if(diff>0){
                    a = 0; 
                }else{
                    a =0 ; 
                    st.pop() ; 
                }

            }
            if( a != 0){
                st.push(a) ; 
            }

        }
       vector<int> result(st.size());
        for (int i = (int)st.size() - 1; i >= 0; --i) {
            result[i] = st.top();
            st.pop();
        }
        return result;
    }
};