// // #include <bits/stdc++.h>

// // using namespace std;
// // class Node
// // {
// // public:
// //     int value;
// //     Node *next_value;
// //     Node(int value)
// //     {
// //         this->value = value;
// //         this->next_value = NULL;
// //     }
// // };
// // void linked_list_tail(Node *&head, int v)
// // {
// //     Node *newcode = new Node(v);
// //     if (head == NULL)
// //     {
// //         head = newcode;
// //         return;
// //     }
// //     Node *tmp = head;
// //     while (tmp->next_value != NULL)
// //     {
// //         tmp = tmp->next_value;
// //     }
// //     // now tmp is last node
// //     tmp->next_value = newcode;
// // }

// // void print_linked_value(Node *head)
// // {
// //     Node *tmp = head;
// //     cout << "Your linked list :";
// //     while (tmp != NULL)
// //     {
// //         cout << tmp->value << " ";
// //         tmp = tmp->next_value;
// //     }
// //     cout << endl;
// // }
// // int main()
// // {
// //     Node *head = NULL;

// //     while (true)
// //     {
// //         cout << "Option :1 insert tail " << endl;
// //         cout << "Option :2 Linked list value print  " << endl;
// //         cout << "Option :3 terminate " << endl;
// //         int op;
// //         cin >> op;
// //         if (op == 1)
// //         {
// //             cout << "Enter the value : "<<endl;
// //             int v;
// //             cin >> v;
// //             linked_list_tail(head, v);
// //         }
// //         else if (op == 2)
// //         {
// //             print_linked_value(head);
// //         }

// //         else if (op == 3)
// //         {
// //             break;
// //         }
// //     }
// //     return 0;
// // }

// // #include <bits/stdc++.h>

// // using namespace std;
// // class Node
// // {
// // public:
// //     int value;
// //     Node *next_value;
// //     Node(int value)
// //     {
// //         this->value = value;
// //         this->next_value = NULL;
// //     }
// // };
// // void insert_at_value(Node *&head, int v)

// // {
// //     Node *newNode = new Node(v);
// //     if (head == NULL)
// //     {
// //         head = newNode;
// //         cout<<endl<<"insert head : "<<endl<<endl;
// //         return;
// //     }
// //     Node *tmp = head;
// //     while (tmp->next_value != NULL)
// //     {
// //         tmp = tmp->next_value;
// //     }
// //     // now tmp is lastnode
// //     tmp->next_value = newNode;
// //     cout<<endl<<"Inset tail : "<<endl<<endl;
// // }

// // void print_linked_list_value(Node *head)
// // {
// //     Node *tmp = head;
// //     cout <<endl<< "Output inser value :"<<endl<<endl;
// //     while (tmp != NULL)
// //     {

// //         cout << tmp->value << " ";
// //         tmp = tmp->next_value;
// //     }
// //     cout << endl
// //          << endl;
// // }

// // void insert_position(Node *&head, int pos, int v)
// // {
// //     Node *newnode = new Node(v);
// //     Node *tmp = head;
// //     for (int i = 1; i <= pos - 1; i++)
// //     {
// //         tmp = tmp->next_value;
// //     }
// //     newnode->next_value = tmp->next_value;
// //     tmp->next_value = newnode;
// //     cout << endl
// //          << "Insert tail value: ";

// // }
// // int main()
// // {
// //     Node *head = NULL;

// //     while (true)
// //     {
// //         cout << "Option 1 : Inserted Tail value " << endl;
// //         cout << "Option 2 : For printing press 2 " << endl;
// //         cout << "Option 3 : Insert newnode any position  " << endl;
// //         cout << "Option 4 : Program terminated  " << endl;
// //         int op;
// //         cout << "Enter your opsiton : ";
// //         cin >> op;
// //         cout << endl
// //              << endl;
// //         if (op == 1)
// //         {
// //             int v;
// //             cout << "Enter your value:";
// //             cin >> v;
// //             insert_at_value(head, v);
// //         }
// //         else if (op == 2)
// //         {
// //             print_linked_list_value(head);
// //         }
// //         else if (op == 3)
// //         {
// //             int pos;
// //             cout << "Enter Your positon : ";
// //             cin >> pos;
// //             int v;
// //             cout << "Enter your value : ";
// //             cin >> v;
// //             insert_position(head, pos, v);
// //         }
// //         else if (op == 4)
// //         {
// //             cout << "Program stoped" << endl;
// //             break;
// //         }
// //     }
// //     return 0;
// // }

// // #include <bits/stdc++.h>

// // using namespace std;
// // class Node{
// //     public:
// //         int value;
// //         Node* next_value;
// //         Node(int value){
// //             this->value=value;
// //             this->next_value=NULL;
// //         }
// // };

// // void insert_linkd_list_value(Node *&head,int v)
// // {
// //     Node*newNode= new Node(v);
// //     if (head == NULL)

// //     {
// //         head= newNode;
// //         return;
// //     }
// //     Node*tmp= head;
// //     while (tmp->next_value != NULL)
// //     {
// //         tmp= tmp->next_value;
// //     }
// //     tmp->next_value= newNode;
// // }
// // void priting_linked_list_value(Node*head){
// //     cout<<endl<<"Linked list inserted value : "<<endl<<endl;
// //     Node*tmp = head;
// //     while (tmp != NULL)
// //     {
// //         cout<<tmp->value<<" ";
// //         tmp= tmp->next_value;
// //     }
// //     cout<<endl<<endl;
// // }
// // void linked_List_position_insert(Node*&head,int pos,int v )
// // {
// //     Node * newnode = new Node(v);
// //     Node *tmp= head;
// //     for (int i=1; i<=pos-1;i++)
// //     {
// //         tmp= tmp->next_value;
// //     }
// //     newnode->next_value= tmp->next_value;
// //     tmp->next_value= newnode;
// //     cout<<endl<<"insertend position "<<endl;
// // }
// // int main()
// // {
// //     Node * head = NULL;
// //     while(true)
// //     {
// //         cout<<"Option 1 : Insert value "<<endl;
// //         cout<<"Option 2 : pirnt inserted value "<<endl;
// //         cout<<"Option 3 : position insert value "<<endl;
// //         cout<<"Option 4 : terminate "<<endl;

// //         int op;cout<<"Enter your Position: ";
// //         cin>>op;
// //         if (op==1)
// //         {
// //             int v;cout<<"Enter your Linked list value : ";
// //             cin>>v;
// //             insert_linkd_list_value(head,v);
// //         }
// //         else if (op ==2){
// //             priting_linked_list_value(head);
// //         }
// //         else if (op==3 )
// //         {
// //             int pos;cout<<"Enter your position : ";
// //             cin>>pos;
// //             cout<<endl<<endl;
// //             int v;cout<<"Enter your value";
// //             cin>>v;
// //             linked_List_position_insert(head,pos,v);
// //         }
// //         else if (op ==4)
// //         {
// //             break;
// //             cout<<"Program finish."<<endl;
// //         }
// //     }

// //     return 0;
// // }

// #include <bits/stdc++.h>

// using namespace std;
// class Node
// {
// public:
//     int value;
//     Node *next_value;
//     Node(int value)
//     {
//         this->value = value;
//         this->next_value = NULL;
//     }
// };

// void insert_linkd_list_value(Node *&head, int v)
// {
//     Node *newNode = new Node(v);
//     if (head == NULL)

//     {
//         head = newNode;
//         return;
//     }
//     Node *tmp = head;
//     while (tmp->next_value != NULL)
//     {
//         tmp = tmp->next_value;
//     }
//     tmp->next_value = newNode;
// }
// void priting_linked_list_value(Node *head)
// {
//     cout << endl
//          << "Linked list inserted value : " << endl
//          << endl;
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->value << " ";
//         tmp = tmp->next_value;
//     }
//     cout << endl
//          << endl;
// }
// void linked_List_position_insert(Node *&head, int pos, int v)
// {
//     Node *newnode = new Node(v);
//     Node *tmp = head;
//     for (int i = 1; i <= pos - 1; i++)
//     {
//         tmp = tmp->next_value;
//     }
//     newnode->next_value = tmp->next_value;
//     tmp->next_value = newnode;
//     cout << endl
//          << "insertend position " << endl;
// }

// void insert_head_new_value(Node *&head, int v)
// {
//     Node *newnode = new Node(v);
//     newnode->next_value = head;
//     head = newnode;
// }

// int main()
// {
//     Node *head = NULL;
//     while (true)
//     {
//         cout << "Option 1 : Insert value " << endl;
//         cout << "Option 2 : pirnt inserted value " << endl;
//         cout << "Option 3 : position insert value " << endl;
//         cout << "Option 4 : Insert New head  " << endl;
//         cout << "Option 5 : terminate " << endl;

//         int op;
//         cout << "Enter your Position: ";
//         cin >> op;
//         if (op == 1)
//         {
//             int v;
//             cout << "Enter your Linked list value : ";
//             cin >> v;
//             insert_linkd_list_value(head, v);
//         }
//         else if (op == 2)
//         {
//             priting_linked_list_value(head);
//         }
//         else if (op == 3)
//         {
//             int pos;
//             cout << "Enter your position : ";
//             cin >> pos;
//             cout << endl
//                  << endl;
//             int v;
//             cout << "Enter your value";
//             cin >> v;
//             if (pos == 0)
//             {
               
//                 insert_head_new_value(head, v);
//             }
//             else
//             {

//                 linked_List_position_insert(head, pos, v);
//             }
//         }
//         else if (op == 4)
//         {
//             int v;
//             cout << "Enter your value";
//             cin >> v;
//             insert_head_new_value(head, v);
//         }
//         else if (op == 4)
//         {
//             break;
//             cout << "Program finish." << endl;
//         }
//     }

//     return 0;
// }

