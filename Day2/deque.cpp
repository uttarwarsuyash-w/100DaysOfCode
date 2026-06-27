void explainDeque(){

    deque<int>dq;
    dq.push_back(1);              /*normal speed*/ //{1}
    dq.emplace_back(2);           /*comparatively faster speed*/ //{1,2}

    dq.push_front(3);             /*normal speed*/ //{3,1,2}
    dq.emplace_front(4);          /*comparatively faster speed*/  //{4,3,1,2} 

    dq.pop_back();                /*removes last element*/ //{4,3,1}
    dq.pop_front();               /*removes first element*/ //{3,1}

    //rest functions are same as vector
    // begin,end,erase,insert,size,clear,empty,front,back etc

}