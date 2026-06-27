void explainvector(){

    vector<int>v;
    v.push_back(1);              /*normal speed*/
    v.emplace_back(2);           /*comparatively faster speed*/

    vector<pair<int,int>>vec;
    vec.push_back({1,2});          /*need curly braces*/
    vec.emplace_back(1,2);      /*no need of curly braces to declare pair*/

    vector<int>v(5,100);         /*5 elements with value 100*/  {100,100,100,100,100}
                                                                  0   1   2   3   4

    vector<int>v1(5);             /*5 elements with value 0 or garbage value according to compiler*/  {0,0,0,0,0}
                                                                  
    vector<int>v1(5,20);          /*5 elements with value 20*/  {20,20,20,20,20}
    vector<int>v2(v1);            /*copy of v1*/  {20,20,20,20,20}



    /*ex={20,19,27,38,21}*/

    vector<int>v::iterator it=v.begin();   /*iterator pointing to first element of vector*/   

    /*therefore it=20*/

    cout<<*(it);             /*prints 20*/

    it++;
    cout<<*(it);             /*prints 19*/

    it=it+2;
    cout<<*(it);             /*prints 38*/

    vector<int>::iterator it=v.end();   /*iterator pointing to last element of vector*/            /*will point after 21 not on 21*/

    vector<int>::iterator it=v.rend();  /*iterator pointing to reverse last element of vector*/    /*will point after 20 from left*/                                      /*mostly never used*/
    vector<int>::iterator it=v.rbegin(); /*iterator pointing to reverse first element of vector*/   /*will point on 21*/   /*if i did it++ here it will give 38*/         /*mostly never used*/






    cout<<v[0]<<" "<<v[1]<<" "<<v[2];       /*accessing elements of vector*/
    cout<<v.back()<<" ";                      /*prints 21*/

    for (vector<int>::iterator it=v.begin();it!=v.end();it++) {   /*iterator to traverse vector*/
        cout<<*(it)<<" ";                      /*prints 20 19 27 38 21*/
    }

    for (auto it=v.begin();it!=v.end();it++) {   /*iterator to traverse vector*/   /*short form*/
        cout<<*(it)<<" ";                      /*prints 20 19 27 38 21*/
    }

    for(auto it=v){
        cout<<it<<" ";                      /*prints 20 19 27 38 21*/
    }

    // {10,20,30,40}
    v.erase(v.begin()+1);   /*erases 20*/  /*{10,30,40}*/
    
    // {10,20,30,40,50}
    v.erase(v.begin()+1,v.begin()+3);   /*erases 20 and 30*/  /*{10,40,50}*/       //(start,end)


    //insert function 

    vector<int>v(2,100);   /*{100,100}*/
    v.insert(v.begin(),300);   /*{300,100,100}*/
    v.insert(    v.begin()+1     ,     2     ,     10   );   /*{300,10,10,100,100}*/
    //             position          times       value

    vector<int>copy(3,50);   /*{50,50,50}*/
    v.insert(v.begin(),copy.begin(),copy.end());   /*{50,50,50,300,10,10,100,100}*/  

    //{10,20}
    cout<<v.size();   /*prints 2*/

    //{10,20}
    v.pop_back();   /*removes last element*/  /*{10}*/

    //v1 {10,20}
    //v2 {30,40}
    v1.swap(v2);   /*v1={30,40} and v2={10,20}*/

    v.clear();   /*removes all elements of vector*/  /*v={}*/

    cout<<v.empty();   /*returns 1 if vector is empty otherwise returns 0*/  /*prints 1*/

    
}