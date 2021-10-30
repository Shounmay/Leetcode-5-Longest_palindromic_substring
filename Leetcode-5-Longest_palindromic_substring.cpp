#include<iostream>
#include<cstring>

using namespace std;





class Solution {
public:
    string getString(char x)
{
    
    string s(1, x);
 
    return s;  
}

    string longestPalindrome(string s) {
        string ans="";
        int p1=0,p2=0,len=0,si=0,ei=0;

   for(int i=0;i<s.size();i++){
       
       p1=i-1,p2=i+1;
       while(p1>=0 && p2<s.size()&& s[p1]==s[p2]){
           
           p1--;
           p2++;
           
       }
       if(p2-p1-1>len){
           ans=s.substr(p1+1,p2-p1-1);
           len=p2-p1-1;
          

       }

       p1=i,p2=i+1;
       
       
       while(p1>=0 && p2<s.size()&& s[p1]==s[p2]){
           
           p1--;
           p2++;
           
           
       }
       if(p2-p1-1>len){
          
          ans=s.substr(p1+1,p2-p1-1);
           len=p2-p1-1;

       }

       
   }
   return ans;
        
    }
};