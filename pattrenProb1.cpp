// Tip For Solving Pattren Problem
//         three things
//          how Number of rows depend upon input
//          number of column depend upon input
//          What to print

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int row, col;
    cin >> row >> col;
                                                /* rectangular pattern */

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<"*";

        }
        cout<<endl;
    }
     cout << endl;
                                                     /*Hollow Rectangale*/

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i==1 || i==row || j==1 || j== col)
            {
                cout<<" * ";
            }
            else
            {
                cout << "   ";
            }

        }
        cout<<endl;

    }
     cout << endl;

                                                /*triange*/
    for (int i = 1; i <= row; i++)
    {
        for (int j= 1; j <= i; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
     cout << endl;

    /*Opposit Triangle*/
     for (int i = row; i >= 1; i--)
    {
        for (int j= i; j >= 1; j--)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
     cout << endl;

                                                
                                                 /*Pyramid*/

    for (int i = 1; i <= row; i++)
    {
        for (int k = 1; k <= (row - i); k++)
        {
            cout<<"   ";
        }
            for (int j = 1; j <= (2 * i) - 1; j++)
            {
                cout << " * ";
            }
        
        cout << endl;
    }



                                            /*numeric Rectangle*/

            for (int i = 1; i <= row; i++)
            {
                for (int j = i; j <= row; j++)
                {
                    cout<<j;
                }
                    for (int j = 1; j <= i-1; j++)
                    {
                         cout<<j;
                    }
                    
                
                cout<<endl;
                
            }
            
    return 0;
}