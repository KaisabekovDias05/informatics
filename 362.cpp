//https://informatics.msk.ru/moodle/mod/statements/view3.php?chapterid=362&run_id=80r174426
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
            if(i==0 || j==0)
            {
                a[i][j]=1;
            }
            if(i>0 && j>0)
            {
                a[i][j]=a[i-1][j]+a[i][j-1];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
