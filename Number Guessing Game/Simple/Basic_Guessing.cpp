#include<bits/stdc++.h>
#define jyot main
using namespace std;
int32_t jyot(){
    cout<<"Welcome to Number Guessing game"<<endl;
    cout<<"Select your Number"<<endl;
    srand(time(0));
    int num=rand()%100+1;
    int guess;
    cin>>guess;
    int cnt=0;
    while(num!=guess){
        if(num>guess){
            cout<<"Number is quite greater than you thought"<<endl;
        }
        else{
            cout<<"Number is quite smaller than you thought"<<endl;
        }
        cin>>guess;
        cnt++;
    }            
    cout<<"You Guessed it ryt in "<<cnt<<" Attempts"<<endl;
    return 0;
}