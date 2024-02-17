#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    //now i want to find multiple of c between a and b inclusive
    for (int i=a;i<=b;i++){
    if(i%c==0){
        cout<<i;
        return 0;
        
    }     
    
}
}