#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    //turn the last elment of s1 and s2 into int and sum them
    int a = s1[s1.length()-1]-'0';
    int b = s2[s2.length()-1]-'0';
    int sum = a+b;
    cout<<sum;
}