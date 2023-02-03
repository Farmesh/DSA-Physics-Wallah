// Vector ---- Dynamic Array , Contiguous memory Allocation
   //declaring vector
//    vector <dataType> vector_name;
//    vector <dataType> vector_name(5);  //size declared

// Operations
//1.size ---- v.size()


//2.resize ----- vector.resize(8);



//3.capacity ---- vector.capacity(){
// capacity  >=  size;
        // vector <int> vctr;
        //  cout<<vctr.size()<<endl;  //size = 0
        //  cout<<vctr.size()<<endl;  // capacity = 0

         //when we add three elements ---capacity increase in power of 2
         //for ef size = 3 and capacity = 4;
         //for size = 5 and capacity = 8;
// }


// 4. Add elements -- vctr.pushback(element);  or vctr.emplace_back(){Faster than push_back}

// at particular Position --- vctr.inssert(position,element)
     //position related to end and first position

         // eg. v.insert(v.begin()+2,5) //insert 5 at 2nd index


//5. remove Elements --- vctr.popback(element);
//at particular pos. --- v.erase(position)
     //position related to end and first position
        // eg. v.end()-2
//clear all -- vctr.clear();


//6. First Element ---- vctr.begin();


//7. last element ---vctr.end();


// vector<pair<int,int>>vect;
// vector<pair<int,int>>vect(5,20); => {20,20,20,20,20}
// vector<pair<int,int>>vect1(vect);  =>copy of vect
#include <bits/stdc++.h>
using namespace std;
int main(){
            vector <int> v;
            cout<<"size: "<<v.size()<<endl;
            cout<<"capacity: "<<v.capacity()<<endl;
            v.push_back(1);
            cout<<"size: "<<v.size()<<endl;
            cout<<"capacity: "<<v.capacity()<<endl;
            v.push_back(2);
            cout<<"size: "<<v.size()<<endl;
            cout<<"capacity: "<<v.capacity()<<endl;
            v.push_back(3);
            cout<<"size: "<<v.size()<<endl;
            cout<<"capacity: "<<v.capacity()<<endl;
            v.push_back(4);
            cout<<"size: "<<v.size()<<endl;
            cout<<"capacity: "<<v.capacity()<<endl;
            v.push_back(5);
            cout<<"size: "<<v.size()<<endl;
            cout<<"capacity: "<<v.capacity()<<endl;
            v.push_back(6);
             cout<<"size: "<<v.size()<<endl;
            cout<<"capacity: "<<v.capacity()<<endl;
            v.resize(10);
              cout<<"size: "<<v.size()<<endl;
            cout<<"capacity: "<<v.capacity()<<endl;
               v.pop_back();
                v.pop_back();
                cout<<"size: "<<v.size()<<endl;
            cout<<"capacity: "<<v.capacity()<<endl;
            v.clear();


            //Looping in vector 
//for loop

       for (int i = 0; i < 5; i++)
       {
          int element;
          cin>>element;
          v.push_back(element);
       }

       cout<<"for loop"<<endl;

         for (int i = 0; i < v.size(); i++)
       {
          cout<<v[i]<<" ";
         
       }
cout<<endl;
    v.insert(v.begin()+2,5);
    v.insert(v.begin()+3,0);

//for each Loop

cout<<"for each loop"<<endl;
    for(int ele:v){
        cout<<ele<<" ";
    }
    v.erase(v.end()-1);
cout<<endl;

// while loop 

   cout<<"While loop"<<endl;
   int idx = 0;
     while(idx < v.size()){
        cout<<v[idx]<<" ";
        idx++;
     }
    cout<<endl;
 


    return 0;
}


