#include <iostream>
#include <vector>
using namespace std;

// Recursive function to find GCD of two numbers
int gcd(int a, int b) {
    // TODO: complete the function as per instructions
    vector<int> factors_a;
    vector<int> factors_b;
    vector<int> common;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            // cout << i << ", ";
            factors_a.push_back(i);
        }
    }
    // cout << endl;
    for (int i = 1; i <= b; i++)
    {
        if (b % i == 0)
        {
            // cout << i << ", ";
            factors_b.push_back(i);
        }
    }
    for (int i = 0; i < factors_a.size(); i++)
    {
        for (int j = 0; j < factors_b.size(); j++)
        {
            if (factors_a[i] == factors_b[j])
            {
                common.push_back(factors_a[i]);
            }
        }
    }
    int hcf = common[0];
    for (int i = 0; i < common.size(); i++)
    {
        if (common[i] > hcf)
        {   
            hcf = common[i];
        }
    }
    return hcf;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    cout << gcd(num1, num2) << "\n";

    return 0;
}

