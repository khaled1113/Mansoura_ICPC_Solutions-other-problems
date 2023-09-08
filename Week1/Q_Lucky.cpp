#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--){
        string s;
        cin>>s;
        //want to turn  the string elmens into integers they ar 6 char
        int arr[6];
        for(int i=0;i<6;i++){
            arr[i]=s[i]-'0';
        }
        //now we have the array of integers
        if(arr[0]+arr[1]+arr[2]==arr[3]+arr[4]+arr[5])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
   
}
