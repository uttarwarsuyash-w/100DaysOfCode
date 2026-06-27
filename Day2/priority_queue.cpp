void explainpriority_queue(){   //priority queue is like max heap                        //KNOWN AS MAX HEAP
    priority_queue<int>pq;

    pq.push(5);         //{5}
    pq.push(2);         //{5,2}
    pq.push(8);         //{8,5,2}
    pq.emplace(10);     //{10,8,5,2}

    cout<<pq.top();     /*prints 10*/  //top() returns the top element of priority queue
    
    pq.pop();           /*removes top element*/  //{8,5,2}

    cout<<pq.top();     /*prints 8*/  //top() returns the top element of priority queue

    //size swap empty are same as others


    //minimum priority queue
    priority_queue<int,vector<int>,greater<int>>pq1;          //KNOWN AS MIN HEAP
    pq1.push(5);         //{5}
    pq1.push(2);         //{2,5}
    pq1.push(8);         //{2,5,8}
    pq1.emplace(10);     //{2,5,8,10}

    cout<<pq1.top();     /*prints 2*/  //top() returns the top element of priority queue
}