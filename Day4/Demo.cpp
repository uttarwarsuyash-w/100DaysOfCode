#include<bits/stdc++.h>
using namespace std;
int main(){
   /* int n,lastdigit,reverse,original;
    n=1231;
    reverse=0;
    original=n;
    
        while(n>0){
            lastdigit=n%10;
            n=n/10;
            reverse=(reverse*10)+lastdigit;

        }
    if (original==reverse ){
        cout<<"yes it is palendrom";
    }
    else{
        cout<<"not a palendrom";
    }

}
*/
    int n,org,sum,last;
    cin>>n;
    sum=0;
    org=n;
    while(n>0){
        last=n%10;
        sum=sum+(last*last*last);
        n=n/10;

    }
    
    if(sum==org){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}