#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,r,x,y;
    cin>>n>>r>>x>>y;
    int c[n],s[n];
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int final = r;
    for(int i=0;i<n;i++){
        if(c[i] and s[i])
            final+=x;
        else if(c[i] and !s[i])
            final-=y;
    }
    if(final > r)
        cout<<"promoted"<<endl;
    else if(final==r)
        cout<<"no change"<<endl;
    else cout<<"demoted"<<endl;
    return 0;
}
