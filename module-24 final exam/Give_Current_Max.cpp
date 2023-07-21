#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->marks = marks;
        this->roll = roll;
        this->name = name;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks < b.marks)
        {
            return true;
        }
        // else if (a.marks > b.marks)
        // {
        //     return false;
        // }
        else if(a.marks == b.marks)
        {
            return a.roll >b.roll;
        }
        else 
        {
            return false;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0) // details insert & max mark parint
        {
            // insert student inf....
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            pq.push(obj);

            // max mark inf...
            Student max_snd = pq.top();
            cout << max_snd.name << " " << max_snd.roll << " " << max_snd.marks << endl;
        }
        else if (cmd == 1) // Print the current student's data
        {
            if (!pq.empty())
            {

            Student max_snd = pq.top();
            cout << max_snd.name << " " << max_snd.roll << " " << max_snd.marks << endl;
            }
            else
                {
                    cout<<"Empty"<<endl;
                }
        }
        else if (cmd == 2) //delete max marks and print 
        {
            if (!pq.empty())
            {
                pq.pop();
            }
            if (!pq.empty())
            {
                Student max_snd = pq.top();
                cout << max_snd.name << " " << max_snd.roll << " " << max_snd.marks << endl;
            }
            else{
                cout<<"Empty"<<endl;
            }
        }
    }

    return 0;
}