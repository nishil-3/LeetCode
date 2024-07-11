class Solution {
public:
    int strStr(string haystack, string needle) {
      int i,count;
        for(i=0;i<haystack.length();i++){
           count=0;//variable to check if all letter in needle string are found
           if(haystack[i]==needle[0]){// check if the haracter if equal to first character in needle
            for(int j=0;j<needle.length();j++){//loop to iterate through needle string and check the matching.
              if(haystack[i+j]==needle[j]){// if the letter is matched increment the count and move to check next letter.
                count++;// the number of letter matched.
              }
              else break ;
          }
          if(count==needle.length()){//if the all letters are found then return the index location.
          return i;
        }
        }
        }  
        return -1;// no match was found.
    }
};