#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count[27]={0};
    for( char c: s){
        count[c-'a']++;
    }
    
    int distinct_chars = 0;
    for(int i: count){
        if(i){

            distinct_chars++;
        }
    }

    if(distinct_chars%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }

}