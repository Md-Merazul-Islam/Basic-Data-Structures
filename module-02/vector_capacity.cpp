#include <bits/stdc++.h>

using namespace std;
int main()
{

// // ---->v.size();

//     vector <int> v;
//     cout<<v.size()<<endl;

// // -----> v.max_size();

//     vector <int> v;
//     cout<<v.max_size()<<endl;
//     v.push_back(10);
//     cout<<v.capacity()<<endl;
//     v.push_back(20);
//     cout<<v.capacity()<<endl;
//     v.push_back(30);
//     cout<<v.capacity()<<endl;
//     v.push_back(40);
//     cout<<v.capacity()<<endl;
//     v.push_back(50);
//     cout<<v.capacity()<<endl;

// //----> v.capacity;

//     vector <int> v;
//     v.push_back(10);
//     v.push_back(12);
//     v.push_back(15);
//     v.push_back(17);
//     v.push_back(18);
//     v.push_back(19);
//     v.clear();// buildin function for clear data 
//     cout<<v.size()<<endl;
//     for (int i=0; i<v.size();i++)
//     {
//         cout<<v[i]<<" "<<endl;
//     }    
//     cout<<v[3]<<endl; // eikahne nirdristo kore index diye output ber kora jabe 

// // -------> v.empty()

//  vector <int> v;
//     v.push_back(10);
//     v.push_back(12);
//     v.push_back(15);
//     v.push_back(17);
//     v.push_back(18);
//     v.push_back(19);
//     v.clear(); 
    

//     if(v.empty())
//     {
//         cout<<"Vactor is empty\n";
//     }
//     else
//     {
//         cout<<"Vactor is not empty";   // this is output
//     }


// -----> v.resize() ;

     vector <int> v;
    v.push_back(10);
    v.push_back(12);
    v.push_back(15);
    v.push_back(17);
    v.push_back(18);
    v.push_back(19);
    v.resize(7,20);// size barano holo  
    cout<<v.size()<<endl;
    for (int i=0; i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }    
    cout<<endl;

    v.resize(2);// size komano holo 
    cout<<v.size()<<endl;
    for (int i=0; i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }    

    return 0;
}