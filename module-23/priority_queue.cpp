#include <bits/stdc++.h>

using namespace std;
int main()
{
    priority_queue<int> pq;
    while (true)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            int x;
            cin >> x;
            pq.push(x); // o(logN) (insert)
        }
        else if (cmd == 1)
        {
            pq.pop(); // o(logN); ( delete)
        }
        else if (cmd == 2)
        {
            cout << pq.top() << " "; // O(1) (front value)
        }
        else
        {
            break;
        }
    }

    return 0;
}




// //greater ----------->

// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     priority_queue<int, vector<int>,greater<int>> pq;
//     while (true)
//     {
//         int cmd;
//         cin >> cmd;
//         if (cmd == 0)
//         {
//             int x;
//             cin >> x;
//             pq.push(x); // o(logN) (insert)
//         }
//         else if (cmd == 1)
//         {
//             pq.pop(); // o(logN); ( delete)
//         }
//         else if (cmd == 2)
//         {
//             cout << pq.top() << " "; // O(1) (front value)
//         }
//         else
//         {
//             break;
//         }
//     }

//     return 0;
// }