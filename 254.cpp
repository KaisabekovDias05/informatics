#include<iostream>
using namespace std;
int main()
{
    int x,y,n,z;
    cin >> x >> y >> z >> n;
    if(x==z)
    {
        cout << "YES";
    }
    else
        if(y==n)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
}
