

#include <bits/stdc++.h>

using namespace std;
int main()
{
    list<string> linklist;
    string str;
    while (true)
    {
        cin >> str;
        if (str == "end")
        {
            break;
        }
        linklist.push_back(str);
    }

    // for (string ans : linklist)
    // {
    //     cout << ans << " ";
    // }

    int q;
    cin >> q;

    auto current = linklist.begin();
    while (q--)
    {
        string address;
        cin >> address;
        bool flag = false;
        if (address == "visit")
        {
            cin >> str;
            for (auto it = linklist.begin(); it != linklist.end(); it++)
            {
                if (*it == str)
                {
                    current = it;
                    flag = true;
                    break;
                }
            }

            if (flag == true)
            {
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available " << endl;
            }
        }

        else if (address == "next")
        {
            current++;
            if (current != linklist.end())
            {
                cout << *current << endl;
            }
            else{
                current--;
                cout << "Not Available " << endl;
            }
        }

        else if (address == "prev")
        {

            if (current == linklist.begin())
            {

                cout << "Not Available" << endl;
            }
            else
            {
                current--;
                cout << *current << endl;
            }
        }
    }
    return 0;
}
