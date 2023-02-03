// using vector

// Find last occurence of an element x in a given array

#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v[6];
    for (int i = 0; i < 6; i++)
    {
         cin >>v[i];
    }
    cout << "enter x" << endl;
    int x;
    cin >> x;
    int occurence = -1;

    for (int i = 0; i < 6; i++)
    {
        if (v[i] == x)
        {
            occurence = i;
        }
    }
    cout << occurence;

    return 0;
}