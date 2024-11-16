#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int count[10]={0};

   while(n){
     if(n%10 == 1 || 2|| 3){
        count[n%10]++;
     }
        n = n/10;
   }

   if(count[1] == 1 && count[2] == 2 && count[3] == 3){
      cout<<"Yes"<<endl;
   }
   else{
      cout<<"No"<<endl;
   }

   return 0;

}