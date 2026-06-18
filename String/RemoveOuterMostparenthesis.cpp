//LeetCode 1021
//optimal
class Solution {
public:
  string removeOuterParentheses(string s) {
    int n = s.size();
    string st = "";
    int count=0;
    for(char ch: s)
    {
      if(ch=='('){
      if(count>0) st.push_back(ch);
        count++;
    } 
      else{
        if(ch ==')'){
          count--;
          if(count>0) st.push_back(ch);
        }
      }
    } return st;
  }
  };


// better

//LeetCode 1021

class Solution {
public:
  string removeOuterParentheses(string s) {
    string st="";
   int initial = 0;
   int final = 0;
   int start = 0;
   for(int i=0;i<s.size();i++){
    if(s[i]=='(') initial++;
    else final++;
    if(initial == final){
         st+=s.substr(start+1,i-start-1);
    start = i+1;
    }
   }
   return st;
  }
  };
