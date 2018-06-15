#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int w=0;
    for(int i=0; i<n; ++i)
    {
        cin >> a[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if(a[i]<0 && a[i+1]<0 || a[i]>0 && a[i+1]>0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}
