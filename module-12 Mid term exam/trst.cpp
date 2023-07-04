// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     list<string> mylist;
//     string val;
//     while (true)
//     {
//         cin >> val;
//         if (val == "end")
//             break;
//         else
//         {
//             mylist.push_back(val);
//         }
//     }
//     // for(string val : mylist)
//     // {
//     //     cout<<val<<" ";
//     // }
//     int t;
//     cin >> t;
//     auto cur = mylist.begin();
//     while (t--)
//     {

//         string address;
//         cin >> address;
//         bool flag = false;

//         if (address == "visit")
//         {
//             cin >> val;

//             for (auto it = mylist.begin(); it != mylist.end(); it++)
//             {
//                 if (*it == val)
//                 {
//                     cur = it;
//                     flag = true;
//                     break;
//                 }
//             }
//             if (flag == true)
//             {
//                 cout << *cur << endl;
//             }
//             else
//             {
//                 cout << "Not Available" << endl;
//             }
//         }
//         else if (address == "next")
//         {
//             cur++;
//             if (cur != mylist.end())
//             {
//                 cout << *cur << endl;
//             }

//             else
//             {
//                 cur--;
//                 cout << "Not Available" << endl;
//             }
//         }
//         else if (address == "prev")
//         {

//             if (cur == mylist.begin())
//             {

//                 cout << "Not Available" << endl;
//             }
//             else
//             {
//                 cur--;
//                 cout << *cur << endl;
//             }
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     string data;
//     Node *next;
//     Node *prv;

//     Node(string data)
//     {
//         this->data = data;
//         this->next = NULL;
//         this->prv = NULL;
//     }
// };

// void insert(Node *&head, Node *&tail, string data)
// {
//     Node *newNode = new Node(data);
//     if (head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     tail->next = newNode;
//     newNode->prv = tail;
//     tail = tail->next;
// }

// Node *check(Node *&head, string &address)
// {
//     if (head == NULL)
//         return head;
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->data == address)
//         {
//             return temp;
//         }
//         temp = temp->next;
//     }
//     return NULL;
// }

// Node *getNext(Node *&head)
// {
//     if (head == NULL)
//         return head;
//     Node *temp = head;
//     if (temp->next != NULL)
//     {
//         return temp->next;
//     }
//     else
//         return NULL;
// }

// Node *getPrev(Node *&tail)
// {
//     if (tail == NULL)
//         return tail;
//     Node *temp = tail;
//     if (temp->prv != NULL)
//     {
//         return temp->prv;
//     }
//     else
//         return NULL;
// }

// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;

//     while (1)
//     {
//         string data;
//         cin >> data;
//         if (data == "end")
//             break;
//         else
//             insert(head, tail, data);
//     }

//     int test;
//     cin >> test;

//     while (test--)
//     {
//         string command;
//         cin >> command;
//         if (command == "visit")
//         {
//             string ad;
//             cin >> ad;
//             Node *res = check(head, ad);
//             if (res != NULL)
//             {
//                 cout << res->data << endl;
//                 head = res;
//                 tail = res;
//             }
//             else
//             {
//                 cout << "Not Available" << endl;
//             }
//         }
//         else if (command == "next")
//         {
//             Node *ad = getNext(head);
//             if (ad != NULL)
//             {
//                 cout << ad->data << endl;
//                 head = ad;
//                 tail = ad;
//             }
//             else
//             {
//                 cout << "Not Available" << endl;
//             }
//         }
//         else if (command == "prev")
//         {
//             Node *ad = getPrev(tail);
//             if (ad != NULL)
//             {
//                 cout << ad->data << endl;
//                 tail = ad;
//                 head = ad;
//             }
//             else
//             {
//                 cout << "Not Available" << endl;
//             }
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;
int main()
{
    list<string> linkedlist;
    string str;
    while (true)
    {
        cin >> str;
        if (str == "end")
        {
            break;
        }
        linkedlist.push_back(str);
    }

    // for ( string a : linkedlist)
    // {
    //     cout<<a<<" ";
    // }
    int q;
    cin >> q;
    // string address;
    auto curt = linkedlist.begin();
    while (q--)
    {
        // string ans = *curt;
        string command;
        cin >> command;
        bool flag = false;
        if (command == "visit")
        {
            cin >> str;
            for (auto it = linkedlist.begin(); it != linkedlist.end(); it++)
            {
                if (*it == str)
                {
                    curt = it;
                    flag = true;
                    break;
                }
            }

            if (flag == true)
            {
                cout << *curt << endl;
            }
            else
            {
                cout << "Not Avaiable" << endl;
            }
        }

        else if (command == "next")
        {
            curt++;
            if (curt != linkedlist.end())
            {
                cout << *curt << endl;
            }
            else
            {
                curt--;
                cout << "Not Avaiable" << endl;
            }
        }

        else if (command == "prev")
        {
            if (curt == linkedlist.begin())
            {
                cout << "Not Available" << endl;
            }

            else
            {
                cout << *curt << endl;
                curt--;
            }
        }
    }
    return 0;
}