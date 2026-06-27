void explainset(){
    set<int>st;
    st.insert(1);              /*normal speed*/  //{1}
    st.emplace(2);           /*comparatively faster speed*/  //{1,2}
    st.insert(2);              /*normal speed*/  //{1,2}
    st.insert(4);              /*normal speed*/  //{1,2,4}
    st.insert(3);              /*normal speed*/  //{1,2,3,4}

    //functionality of insert in vector
    //can be used also , that is only increases
    //efficient

    //being end rbeing rend size empty swap are all same 

    //{1,2,3,4,5}
    auto it = st.find(3);      /*returns iterator to 3*/  //{1,2,3,4}

    //{1,2,3,4,5}
    auto it = st.find(6);     /*returns iterator to end*/  //{1,2,3,4}

    //{1,2,3}
    st.erase(2);              /*removes 2*/  //{1,3}

    int cnt = st.count(1);         /*returns 1 if 1 is present else 0*/  //{1,3}

    auto it= st.find(3);      /*returns iterator to 3*/  //{1,3}
    st.erase(it);             /*removes 3*/  //{1}

    //{1,2,3,4,5}
    auto it1=st.find(3);      
    auto it2=st.find(5);
    st.erase(it1,it2);       /*removes 3,4*/  //{1,2,5}  [first,last)

    //lower_bond and upper_bound are same as vector

    //this is the syntax
    auto it=st.lower_bound(2);  /*returns iterator to 2*/  //{1,2,5}
    auto it=st.upper_bound(2);  /*returns iterator to 5*/  //{1,2,5}
    
}