#include <iostream>
#include <vector>
using namespace std;

int secondLargest(vector<int> &arr)
{
    // TODO: complete the function as per instructions
    int second;
    int largest;
    int rep = 0;
    if (arr.size() > 1)
    {
        largest = arr[0];
        for (int i = 0; i < arr.size(); i++)
        {
            if (largest < arr[i])
            {
                largest = arr[i];
            }
        }
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == largest)
            {
                arr.erase(arr.begin() + i);
            }
        }
        second = arr[0];
        if (arr.size() != 0)
        {
            for (int i = 0; i < arr.size(); i++)
            {
                if (second < arr[i])
                {
                    second = arr[i];
                }
            }
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << secondLargest(arr) << "\n";
    return 0;
}
