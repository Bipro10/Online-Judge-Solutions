#include <bits/stdc++.h>
using namespace std;

int main(){
      int a,b,c;
      while(cin>>a>>b>>c){
          if((a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b) ){
            __gcd(a,__gcd(b,c))==1 ?  cout<<"tripla pitagorica primitiva\n" 
                                    : cout<<"tripla pitagorica\n";
       }
       else cout<<"tripla\n";
    }
    return 0;
}