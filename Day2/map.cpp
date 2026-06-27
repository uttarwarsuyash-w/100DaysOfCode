void explainmap(){

    map<int,int>mpp;
   //   key  value
        

    map<int,pair<int,int>mpp;
    // key    value

    map<pair<int,int>,int>mpp;
 //     key          value

 mpp[1] = 2;  //{1,2}
 mpp.emplace({3,1});  //{{3,1}

 mpp.insert({2,4});  //{2,4}

 mpp[{2,3}] = 10;  //{{2,3},10}

 for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    //lower_bound and upper_bound are same as vector

    cout<<mpp[5];  //returns value of key 5 if present else 0
    cout<<mpp[1]; //returns value of key 1 if present else 0

    auto it = mpp.find(3);  //returns iterator to key 3 if present else mpp.end()

    cout<< *(it).first<<" "<<*(it).second<<endl;


    auto it=    mpp.find(5);  //returns iterator to key 5 if present else mpp.end()

    //this is the syntax

    auto it= mpp.lower_bound(2);  //returns iterator to key 2 if present else next greater key
    auto it= mpp.upper_bound(2);  //returns iterator to next greater key

    //rest are same
}