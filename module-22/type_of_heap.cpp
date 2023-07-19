1) What is Heap?
Ans: Tree based(Complete Binary Tree) sequential/ linear data structure.
Ans: 
    Simple and Powerful Data Structure.
    Varient of Binary Tree (Complete Binary Tree)
    
    Operation:
            -> Insert - O(logn) where BST support insertion around - O(h) [O(n) or O(logn)]
            -> Deletion - O(logn)
            -> get Max Value (Max Heap) / Min Value (Min Heap) - O(1)
            -> Extract Max // O(logn)
            -> Build heap form array (insert O(n))
            -> Heap Sort

    Type of Heap:
                1) Max Heap (Return max value at O(1) time) - (up-heapify)
                   Property: root value > child value
                2) Min Heap (Return min value at O(1) time) - (down-heapify)
                   Property: root value < child value

    Relation between parent and child:
    Parent : (index - 1)/2
    Child : 2*index + 1 (Left child)
            2*index + 2 (Right child)
    Last Non Leaf Node : n/2-1 [ Where n = number of nodes]
2) What is Complete Binary tree?
3) Array representaiton of Complete Binary tree.
4) Insertion
5) Deletion
6) Array to Heap Convertion


// ------------------------------------------->
//------------------------------------------>
#include <bits/stdc++.h>
using namespace std;

class MaxHeap
{
public:
    vector<int> v;
    MaxHeap()
    {
    }

    void up_heapify(int idx)
    {
        while (0 < idx && v[idx] > v[(idx - 1) / 2])
        {
            swap(v[idx], v[(idx - 1) / 2]);
            idx = (idx - 1) / 2;
        }
    }

    // O(logn)
    void push(int val)
    {
        v.push_back(val);
        up_heapify(v.size() - 1);
    }

    void printHeap()
    {
        for (int val : v)
        {
            cout << val << " ";
        }
        cout << '\n';
    }

    void down_heapify(int idx)
    {
        while (true)
        {
            int largest = idx;
            int l = 2 * idx + 1;
            int r = 2 * idx + 2;

            if (l < v.size() && v[largest] < v[l])
            {
                largest = l;
            }
            if (r < v.size() && v[largest] < v[r])
            {
                largest = r;
            }
            if (largest == idx)
                break;

            swap(v[idx], v[largest]);
            idx = largest;
        }
    }

    // O(logn)
    void pop(int idx)
    {
        swap(v[idx], v[v.size() - 1]);
        v.pop_back();
        down_heapify(idx);
    }

    // O(1)
    int getMax()
    {
        return v[0];
    }

    // O(n)
    void buildHeapFromArray(vector<int> &arr)
    {
        v = arr;
        int n = v.size();
        int lastNonLeafNode = n / 2 - 1;

        for (int i = lastNonLeafNode; i >= 0; i--)
        {
            down_heapify(i);
        }
    }
};

int main()
{
    MaxHeap mx;

    mx.push(1);
    mx.push(2);
    mx.push(3);
    mx.push(4);
    mx.push(5);

    mx.printHeap();

    mx.pop(0);
    mx.printHeap();

    cout << mx.getMax() << endl;

    vector<int> arr = {1, 2, 3, 4, 5};
    mx.buildHeapFromArray(arr);
    mx.printHeap();

    return 0;
}