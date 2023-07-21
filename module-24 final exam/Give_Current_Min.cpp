// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     set<int> s;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         s.insert(x);
//     }
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int cmd;
//         cin >> cmd;
//         if (cmd == 0) // insert val & pirnt current minimun
//         {
//             int val;
//             cin >> val;
//             s.insert(val);
//             cout << *(s.begin()) << endl;
//         }

//         else if (cmd == 1)
//         {
//             // print mimimun value
//             if (!s.empty())
//             {
//                 cout << *(s.begin()) << endl;
//             }
//             else
//             {
//                 cout << "Empty" << endl;
//             }
//         }
//         else if (cmd == 2) // delte the mimimum value & print current value
//         {
//             if (!s.empty())
//             {
//                 s.erase(s.begin());
//                 if (!s.empty())
//                 {

//                     cout << *(s.begin()) << endl;
//                 }
//                 else
//                 {
//                     cout << "Empty" << endl;
//                 }
//             }

//             else
//             {
//                 cout << "Empty" << endl;
//             }
//         }
//     }
//     return 0;
// }

// -------------------------------------------->

#include <bits/stdc++.h>

using namespace std;
int main()
{
   priority_queue<int, vector<int>,greater<int>> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0) // insert val & pirnt current minimun
        {
            int val;
            cin >> val;
            pq.push(val);
            cout << pq.top() << endl;
        }
        else if (cmd == 1)
        {
            // print mimimun value
            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (cmd == 2) // delte the mimimum value & print current value
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {

                    cout << pq.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }

            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}