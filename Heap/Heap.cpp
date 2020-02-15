#include <iostream>
#include <vector>
#include <algorithm>

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
int main()
{
    vector<int> vec = {4, 1, 6, 3, 9, 0, 12};
    int size = vec.size();
    for (int i = 0; i < size; i++)
    {
        heapify(vec, i);
    }
    cout << "\nHeapify :";
    for (int m : vec)
        cout << m << " ";

    while (size != 0)
    {
        swap(vec[0], vec[size - 1]);
        size--;
        perculate(vec, 0, size);
    }
    cout << "\nSorting :";

    for (int m : vec)
        cout << m << " ";
    return 0;
}