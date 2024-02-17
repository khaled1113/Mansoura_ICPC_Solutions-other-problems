#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
    cin>>s;
    int n=s.length();
    int count=0;
    for(int i=0;i<n;i++){
      if(isupper(s[i])){
       count++;
      }
    }
      if(count==n-1&&s[0]==tolower(s[0])){
        s[0]=toupper(s[0]);
        for(int i=1;i<n;i++){
          s[i]=tolower(s[i]);
        }
        
      }
      if(count==n){
        for(int i=0;i<n;i++){
          s[i]=tolower(s[i]);
        }
        
      } 
      
      cout<<s;
      return 0;
    
    }
    
