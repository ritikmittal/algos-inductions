#include <bits/stdc++.h>

using namespace std;

int main() {
    set<int> st({10, 8, 7, 16, 9, 43});
    int *arr = new int[6]{0},x;
    cout<<"Enter product for 1st and 2nd term: ";
    cin>>x;
    for(auto element: st){
        if(x%element == 0 and (st.find(x/element)!=st.end())){
            arr[0] = element;
            arr[1] = x/element;
            break;
        }
    }
    cout<<"Enter product for 3rd and 4th term: ";
    cin>>x;
    for(auto element: st){
        if(x%element == 0 and (st.find(x/element)!=st.end())){
            arr[2] = element;
            arr[3] = x/element;
            break;
        }
    }
    cout<<"Enter product for 1st and 6th term: ";
    cin>>x;
    if(x%arr[0]==0 and (st.find(x/arr[0])!=st.end())){
        arr[5] = x/arr[0];
    } else {
        swap(arr[0],arr[1]);
        arr[5] = x/arr[0];
    }
    cout<<"Enter product for 3rd and 5th term: ";
    cin>>x;
    if(x%arr[2]==0 and (st.find(x/arr[2])!=st.end())){
        arr[4] = x/arr[2];
    } else {
        swap(arr[2],arr[3]);
        arr[4] = x/arr[2];
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<", ";
    }
    return 0;
}
