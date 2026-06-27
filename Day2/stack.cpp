void explainStack(){         //stack is like LIFO(Last in First Out)
    stack<int>st;
    st.push(1);              /*normal speed*/  //{1}
    st.push(2);              /*normal speed*/  //{2,1}
    st.push(3);              /*normal speed*/  //{3,2,1}
    st.emplace(4);           /*comparatively faster speed*/  //{4,3,2,1}

    cout<<st.top();          /*prints 4*/  //top() returns the top element of stack
    st.pop();                /*removes top element*/  //{3,2,1}

    cout<<st.size();         /*prints 3*/  //size() returns the number of elements in stack
    cout<<st.top();          /*prints 3*/  //top() returns the top element of stack

    cout<<st.empty();        /*prints 0*/  //empty() returns true if stack is empty else false

    stack<int>st1,st2;
    st1.swap(st2);              /*swaps the contents of two stacks*/  


}