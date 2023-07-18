void delete_heap(vector<int> &v)
{
    if (v.empty())
    {
        return;
    }
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;
    while (true)
    {
        int left_index = cur * 2 + 1;
        int right_index = cur * 2 + 2;
        int last_index = v.size() - 1;
        if (left_index <= last_index && right_index <= last_index)
        {
            if (v[left_index] >= v[right_index] && v[left_index] > v[cur])
            {
                swap(v[left_index], v[cur]);
                cur = left_index;
            }
            else if (v[right_index] >= v[left_index] && v[right_index] > v[cur])
            {
                swap(v[right_index], v[cur]);
                cur = right_index;
            }
            else
                break;
        }
        else if (left_index <= last_index)
        {
            if (v[left_index] > v[cur])
            {

                swap(v[left_index], v[cur]);
                cur = left_index;
            }
            else
                break;
        }
        else if (right_index <= last_index)
        {
            if (v[right_index] > v[cur])
            {
                swap(v[right_index], v[cur]);
                cur = right_index;
            }
            else
                break;
        }
        else
        {
            break;
        }
    }
}