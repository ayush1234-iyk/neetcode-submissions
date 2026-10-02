class Solution {
public:

/*

    append the string one by one  
    if  one string is loner than other 
    then append the longer string to the smaller string 

    1. equal 
    2. greatter 

*/

    string mergeAlternately(string word1, string word2) {
        
        int n = word1.size() ; 
        int m = word2.size() ; 

        int i = 0; 
        int j =0 ; 
        string res = "" ; 

        while(i < n || j < m ){
        if(i<n)    res += word1[i++] ; 
          if(j<m)  res += word2[j++] ; 
        }
    return res ; 
    }
};