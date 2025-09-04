#include <iostream>
#include <vector>
using namespace std;

int productExceptIndex(const vector<int> arr, int index) {
    int product = 1;
    // TODO: complete the function as per instructions
    for (int i = 0; i < arr.size(); i++)
    {
        if (i != index)
        {
        product *= arr[i];
        }
        // cout << arr[i] << endl;
    }
    return product;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) 
    {
        cin >> arr[i];
    }
    vector<long long> res(n);
    for (int i = 0; i < res.size(); i++)
    {
        res[i] = productExceptIndex(arr, i);
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}

