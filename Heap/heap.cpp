#include <iostream>
#include <vector>
#include <algorithm>

//Code for heapify...

using namespace std;

void perculate(vector<int> &vec, int index, int size)
{
    int lIndex = index * 2 + 1;
    int rIndex = index * 2 + 2;
    int maxIndex;
    if (lIndex < size)
    {
        maxIndex = lIndex;
        if (rIndex < size && vec[maxIndex] < vec[rIndex])
        {
            maxIndex = rIndex;
        }
        if (vec[maxIndex] > vec[index])
        {
            swap(vec[index], vec[maxIndex]);
            perculate(vec, maxIndex, size);
        }
    }
}

void heapify(vector<int> &vec, int index)
{
    if (index == 0)
        return;

    else
    {
        if (vec[(index - 1) / 2] < vec[index])
        {
            swap(vec[(index - 1) / 2], vec[index]);
            heapify(vec, (index - 1) / 2);
        }
    }
}
