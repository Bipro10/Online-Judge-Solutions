#include <bits/stdc++.h>
using namespace std;

//uri 1168
int main() {
    int arr[10]={6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    string s;
    int t, leds;
    cin>>t;
    while(t--){
        cin>>s;
        int len = s.length();
        leds=0;
        for(int i=0;i<len;i++){
            leds += arr[s[i]-'0'];
        }
        cout<<leds<<" leds\n";
    }
    return 0;
}