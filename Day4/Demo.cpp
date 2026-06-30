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

    int n,cnt;
    cnt=0;
    cout<<"enter a number";
    cin>>n;
    for(int i=1;i*i<=n;i++){
        if (n%i==0){
            cnt++;
            if((n/i)!=i){
                cnt++;
            }
        }
    }
        if(cnt==2){
            cout<<"yes it is a prime";
        }
        else{
            cout<<"no";
        }

        


    int n1,n2,gcd;
    gcd=1;
    n1=10;
    n2=20;
    for(int i=1;i<=(min(n1,n2));i++){
        if(n1%i==0 and n2%i==0){
            gcd=i;
        }
    }
    cout<<gcd;
}
    */

    int n1,n2,gcd;
    gcd=1;
    n1=10;
    n2=20;
    for(int i=(min(n1,n2));i>=0;i--){
        if(n1%i==0 and n2%i==0){
            gcd=i;
            break;
        }
    }
    cout<<gcd;
}
*/