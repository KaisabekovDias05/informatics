#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int i=a;
    for(i=a;i<=b;++i)
    {
        if(i%d==c)
        {
            cout << i << " ";
        }
    }
}
