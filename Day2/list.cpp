void explainlist(){
   
    list<int>ls;
    ls.push_back(1);              /*normal speed*/  /*{1}*/
    ls.emplace_back(2);           /*comparatively faster speed*/ /*{1,2}*/

    ls.push_front(3);             /*normal speed*/  /*{3,1,2}*/
    ls.emplace_front(4);          /*comparatively faster speed*/  /*{4,3,1,2}*/ 

    //rest functions are same as vector
    // begin,end,erase,insert,size,clear,empty,front,back etc

}