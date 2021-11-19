#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;


int main()
{
    int n;
    int imax, mmax, imin, mmin, t;
    cin  >> n;
    int Array[n];

    for(int i=0; i<n; i++)
    {
        cin  >> Array[i];
    }

    imax = 0, mmax = Array[0];
    imin = n-1, mmin = Array[n-1];

    for(int i=0; i<n; i++)
    {
        if(Array[i] > mmax)
        {
            mmax = Array[i];
            imax = i;
        }
    }

    for(int i=n-1; i>=0; i--)
    {
        if(Array[i] < mmin)
        {
            mmin = Array[i];
            imin = i;
        }
    }

    t = (n-1) - imin + imax;

    if(t>n)
        t--;
    cout << t << endl;
    return 0;
}


