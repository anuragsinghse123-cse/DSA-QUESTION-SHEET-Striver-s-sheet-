//LeetCode 1021

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
