#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    int y=0,x=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==a[j][i])
            {
                x=x+1;
            }
            else
            {
                y=y+1;
            }
        }
        
    }
    if(y>0)
    {
        cout <<"no";
    }
    else
    {
        cout << "yes";
    }
    
}
