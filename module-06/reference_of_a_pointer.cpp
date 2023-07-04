// #include <bits/stdc++.h>
// using namespace std;
// void fun(int * &p){
//     p= NULL;
//     cout<<&p<<endl;
// }
// int main()
// {
//     int value = 10;
//     int *ptr = &value;
//     fun(ptr);
//     cout<<ptr<<endl; // value print
//     return 0;
// }

// 1. What will be the output of the following code?
// #include <bits/stdc++.h>
// using namespace std;
// void fun(int *p){
//     *p = 20;
// }
// int main(){
//     int val = 10;
//     int *ptr = &val;
//     fun(ptr);
//     cout << *ptr << endl;
//     return 0;
// }

// 2. What will be the output of the following code?
// #include <bits/stdc++.h>
// using namespace std;
// void fun(int *p){
//     p = NULL;
// }
// int main(){
//     int val = 10;
//     int *ptr = &val;
//     fun(ptr);
//     cout << *ptr << endl;
//     return 0;
// }


// 3. What will be the output of the following code?
// #include <bits/stdc++.h>
// using namespace std;
// void fun(int *&p){
//     p = NULL;
// }
// int main() {
//     int val = 10;
//     int *ptr = &val;
//     fun(ptr);
//     cout << *ptr << endl;
//     return 0;
// }



// 4. What will the following code snippet do?
// Node *tmp = head;
// while (tmp->next != NULL)
// {
//     tmp = tmp->next;
// }
// tmp->next = newNode;


// 5. What will the following code snippet do?
// newNode->next = head;
// head = newNode;



// 6. What will the following code snippet do?
// Node *tmp = head;
// for (int i = 1; i <= pos - 1; i++)
// {
//     tmp = tmp->next;
// }
// newNode->next = tmp->next;
// tmp->next = newNode;



// 7. What will the following code snippet do?
// Node *deleteNode = head;
// head = head->next;
// delete deleteNode;


// 8. What will the following code snippet do?
// ode *tmp = head;
// for (int i = 1; i <= pos - 1; i++)
// {
//     tmp = tmp->next;
// }

// Node *deleteNode = tmp->next;
// tmp->next = tmp->next->next;
// delete deleteNode;



// 9. What does the following code snippet do?
// if (tmp->next == NULL)
// {
//     cout << "Invalid Index" << endl;
//     return;
// }
/// delete a node ---out


// 10. What does the following code snippet do?
// for (int i = 1; i <= pos - 1; i++)
// {
//     tmp = tmp->next;
//     if (tmp == NULL)
//     {
//         cout << "Invalid Index" << endl;
//         return;
//     }
// } // stop invaid note
