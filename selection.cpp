#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[i])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
// find the mininum element in the unsorted array and then swap it at beginning.