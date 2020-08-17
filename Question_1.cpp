#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,i;
    cin>>n;
    string str;
    string string1(n,'0'),string2(n,'0');
    cin>>str;
    bool flag = false;
    for(i=n-1;i>=0;i--){
        if(str[i] == '0'){
            string2[i]='1';
            flag = true;
            i--;
            break;
        } else {
            string2[i] = '0';
        }
    }
    if(!flag){
        cout<<-1<<endl;
        return 0;
    }
    for(;i>=0;i--){
        string2[i]=str[i];
    }
    for(i=n-1;i>=0;i--){
        if(str[i]=='1'){
            string1[i]='0';
            i--;
            break;
        } else{
            string1[i] = '1';
        }
    }
    for(;i>=0;i--){
        string1[i]=str[i];
    }
    cout<<string1<<' '<<string2;
    return 0;
}
