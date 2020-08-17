#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    string str;
    cin>>str;
    int flag = 1,d=0;
    while(flag and (n>>(d)) > 0){
        d++;
        for(int i=0,j=(n>>d);i<(n>>d);i++,j++){
            if(str[i] != str[j]){
                flag = 0;
                break;
            }
        }
    }
    cout<<d-1<<endl;
    return 0;
}
