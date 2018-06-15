//https://informatics.msk.ru/moodle/mod/statements/view3.php?chapterid=354&run_id=80r174034
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j==n-1)
            {
                a[i][j]=1;
            }
            else
                if(i+j<n-1)
                {
                    a[i][j]=0;
                }
                else{
                    a[i][j]=2;
                }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
