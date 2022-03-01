#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int n;
    cout<<"enter the number for factorial\n";
    cin>>n;
    int m=47;
    int fact=1;
    for(int i=2;i<n;i++){
      fact=(fact*i)%m;  
    }
    cout<<fact;
    
    
    return 0;
}