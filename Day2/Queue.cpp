void explainQueue(){   //Queue is like FIFO(First in First out)
    queue<int>q;
    q.push(1);              /*normal speed*/  //{1}
    q.push(2);              /*normal speed*/  //{1,2}
    q.emplace(4);           /*comparatively faster speed*/  //{1,2,4}
     
    q.back() +=5;                 /*adds 5 to last element*/  //{1,2,9}

    cout<<q.back();          /*prints 9*/  //back() returns the last element of queue
  
    //Q is {1,2,9}
    cout<<q.front();         /*prints 1*/  //front() returns the first element of queue

    q.pop();                /*removes first element*/  //{2,9}
    
    //size swap empty are same as stack

}