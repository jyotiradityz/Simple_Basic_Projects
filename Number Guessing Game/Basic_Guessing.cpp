#include<bits/stdc++.h>
#define jyot main
using namespace std;
int32_t jyot(){
    cout<<"Welcome to Number Guessing game"<<endl;
    cout<<"Select your Number"<<endl;
    srand(time(0));
    int num=rand()%100+1;
    int k;
    cin>>k;
    int cnt=0;
    while(num!=k){
        if(num>k){
            cout<<"Number is quite greater than you thought"<<endl;
        }
        else{
            cout<<"Number is quite smaller than you thought"<<endl;
        }
        cin>>k;
        cnt++;
    }            
    cout<<"You Guessed it ryt in "<<cnt<<" Attempts"<<endl;
    return 0;
}