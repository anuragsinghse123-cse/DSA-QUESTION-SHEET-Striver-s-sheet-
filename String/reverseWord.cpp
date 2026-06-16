class Solution{
public:
string reverseWords(string s){
  string ans = "";
  int i = s.size()-;
  while(i>=0){
    while(i>=0 && s[i]= )i-' '-;
    if(i<0) break;
    words = ""'
      while(i>=0 && s[i]!=' '){
      words = s[i]+words;
    i--;
      }
  if(ans!=""){
    ans+=' ';
}
  ans+=words;
};




/// another way
class Solution{
public:
string reverseWords(string s){
string t ="";
vector<string>ans;
for(int i =0;i<s.size();i++){
  if(s[i]!=' '){
    t+=s[i];
  }
  else{
    if(t!=""){
      ans.push_back(t);
      t = ""; 
    }
  }}
  if (t != "") {
            ans.push_back(t);
        }
t ="";
int n  = ans.size()-1;
for(int i = n;i>=0;i--){
  t+=ans[i];
  if(t!=0) t+=' ';
}
  return t;
}
}
