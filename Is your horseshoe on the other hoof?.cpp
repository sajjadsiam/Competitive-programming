#include<bits/stdc++.h>
using namespace std;
   int main() {
    long long ar[4],count=0;
    for (int i=0;i<4;++i) {
        cin>>ar[i];
    }
    sort(ar,ar+4);
     for (int i=0;i<3;++i) {
        if(ar[i]==ar[i+1]){
            count++;
        }
    }   
    cout<<count<<endl;
 
    return 0;
}
