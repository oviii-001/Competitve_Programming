#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    for(int i=0; i<x; i++)
    {
        int n;
        int div=0
        for(int j=2; j<=x/2; j++)
        {
            if(n/j==0)cout<< "not prime";
            else{
                cout << "prime";
            }
        }

    }
}

