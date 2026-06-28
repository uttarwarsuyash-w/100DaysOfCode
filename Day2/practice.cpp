#include<bits/stdc++.h>
using namespace std;
int main(){
/*    vector<int>v;
    
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<v.size()<<endl;

}  

    pair<int,int>p;
    p.first=29;
    p.second=82;
    cout<<p.first<<" "<<p.second<<endl;
}
    

    stack<int>st;

    cout<<"enter 5 elements"<<endl;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        st.push(x);
    }
    cout<<"top element"<<st.top()<<endl;
    cout<<"size of the stack is"<<st.size()<<endl;

    st.pop();
    st.pop();

    cout<<"top element"<<st.top()<<endl;
    cout<<"size of the stack is"<<st.size()<<endl;

   while(st.size>0){
    cout<<st.top()<<" ";
    st.pop();
   }

}
   
   char s[100];

cout << "Enter a name: ";
cin >> s;

stack<char> st;

// Push every character
for(int i=0;!(s[i]=='\0');i++){
    st.push(s[i]);
}

while(!st.empty()){
    cout<<st.top();
    st.pop();
}


    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    
    queue<int>q;
    for(int i=0;i<5;i++){
        q.push(arr[i]);
    }
    cout<<"size of the queue is "<<q.size()<<endl;
    cout<<"front element is "<<q.front()<<endl;
    cout<<"back element is "<<q.back()<<endl;

    q.pop();
    q.pop();

    cout<<"size of the queue is "<<q.size()<<endl;
    cout<<"front element is "<<q.front()<<endl;
    cout<<"back element is "<<q.back()<<endl;

    while(!q.empty()){
        cout<<q.front();
        q.pop();
    }

}


    priority_queue<int>pq;

    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];

    }

    for(int i=0;i<5;i++){
        pq.push(arr[i]);
    }

    cout<<"size of the priority queue is "<<pq.size()<<endl;
    cout<<"top element is "<<pq.top()<<endl;

    pq.pop();
    pq.pop();

    cout<<"size of the priority queue is "<<pq.size()<<endl;
    cout<<"top element is "<<pq.top()<<endl;

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}

*/


    set<int>s;

    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
        s.insert(arr[i]);
    }
    
    for(auto x : s){
        cout<<x<<" ";
    }
    cout<<s.size();
    
}
