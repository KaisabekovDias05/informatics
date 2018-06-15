#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j];
        }
    }
    int row[n];
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++) {
            sum+=a[i][j];
        }
        row[i]=sum;
    }
    
    int max;
    max=row[0];
    for(int i=0; i<n; i++)
    {
        if(row[i]>max)
        {
            max=row[i];
        }
    }
    for(int i=0;i<n;++i)
    {
        if(row[i]==max){
            cout << max << endl;
            cout << i << endl;
            return 0;
        }
    }
}
