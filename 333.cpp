#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int i=a;
    for(i=a;i<=b;++i)
    {
        if(i%2==0)
        {
            cout << i << " ";
        }
    }
}
