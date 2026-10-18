class Solution {
public:

    /*

    if it is a number then convert the string into the number and push it into the stack 
    else if it is an operator then do the operationa nd pop the number from the stack 

    */

    int evalRPN(vector<string>& tokens) {
        
        stack<int> res  ; 

        for(const string &c : tokens){

            if(c == "+") {
                int a = res.top() ; res.pop() ;
                int b = res.top() ; res.pop() ;
                res.push(a +b ) ; 
            }
             else if(c == "*") {
                int a = res.top() ; res.pop() ;
                int b = res.top() ; res.pop() ;
                res.push(a * b ) ; 
            }
              else if(c == "-") {
                int a = res.top() ; res.pop() ;
                int b = res.top() ; res.pop() ;
                res.push(b-a) ; 
            }
             else if(c == "%") {
               int a = res.top() ; res.pop() ;
                int b = res.top() ; res.pop() ;
                res.push(a % b ) ; 
            }
            else if(c  == "/"){
                int a = res.top() ; 
                res.pop() ; 
                int b  = res.top() ; 
                res.pop() ; 
                res.push(b/a) ;
            }
            else{
                //make the string into int 
                res.push(stoi(c)) ; 
            }

        }
return res.top();
    }
};
