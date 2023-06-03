#include<bits/stdc++.h>
#define jyot main
using namespace std;
int32_t jyot(){
    cout<<"Welcome to Number Guessing game"<<endl;
    cout<<"Enter How many People want to play"<<endl;
    int total_people;
    cin>>total_people;
    map<string,int>res;
    while(total_people--){
        cout<<"Enter Name"<<endl;
        string name;
        cin>>name;
        res[name]=0;
    }
    for(auto i:res){
        cout<<"It's "<<i.first<<" turn "<<endl;
        cout<<"Select your Number"<<endl;
        srand(time(0));
        int num=rand()%100+1;
        int input;
        cin>>input;
        int cnt=0;
        while(num!=input){
            if(num>input){
                cout<<"Number is quite greater than you thought"<<endl;
            }
            else{
                cout<<"Number is quite smaller than you thought"<<endl;
            }
            cout<<"Next Guess Plz"<<endl;
            cin>>input;
            cnt++;
        }
        res[i.first]=cnt;    
    }
    int winner_score=INT_MAX;
    for(auto i:res){
        winner_score=min(winner_score,i.second);
    }
    string winner;
    for(auto i:res){
        if(i.second==winner_score){
            cout<<"Winner/s is/are: "<<i.first<<endl;
            cout<<"He guessed it in Just "<<i.second<<" attempts"<<endl;
        }
    }
    return 0;
}