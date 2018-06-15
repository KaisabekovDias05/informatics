#include<iostream>
using namespace std;
int main()
{
    int x,y,n,z;
    cin >> x >> y >> z >> n;
    if(abs(x-z)==abs(y-n)||x==z||y==n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
