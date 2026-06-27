void explainpair(){

    pair<int,int>p={1,3};

    cout<<p.first<<" "<<p.second;

    pair<int,pair<int,int>>p1={1,{2,3}};

    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second;

    pair<int,int>arr[]={{1,2},{2,3},{3,4}};

    cout<<arr[1].first<<" "<<arr[1].second;
    
}