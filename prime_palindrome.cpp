#include <iostream>
#include <string>
#include <cmath>
#include <typeinfo>
using namespace std;

bool isPrime(int n) {
    // TODO: complete the function as per instructions
    if (n < 2)
    {
        return false;
    }
    else if (n == 2)
    {
        return true;
    }
    else
    {
    int check = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            check = 1;
            break;
        }
    }
    if (check == 1)
    {
        return false;
    }
    else
    {
        return true;
    }
    }
}

bool isPalindrome(int n) {
    // TODO: complete the function as per instructions
    string num = to_string(n);
    string reverse;
    for (int i = num.length(); i >= 0; i--)
    {
        reverse += num[i];
    }
    bool check;
    bool result = num.compare(reverse);
    cout << typeid(num).name() << ", " << typeid(reverse).name() << endl;
    cout << num << ", " << reverse << ", " << check << endl;
    if (num == reverse)
    {
        check = true;
    }
    else
    {
        check = false;
    }
    return check;
}

bool primePalindrome(int n) {
    bool prime = isPrime(n);
    bool palindrome = isPalindrome(n);
    if (prime && palindrome)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() {
    int n; cin >> n;
    cout << (primePalindrome(n) ? 1 : 0) << "\n";
    // cout << (isPrime(n) ? 1 : 0) << "\n";
    // cout << (isPalindrome(n) ? 1 : 0) << "\n";
    return 0;
}

