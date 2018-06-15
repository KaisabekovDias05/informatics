//https://informatics.msk.ru/moodle/mod/statements/view3.php?chapterid=357&run_id=80r174500
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
    int max=a[0][0];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
    }
    cout << max << endl;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            if(a[i][j]==max){
                cout << i << " " << j;
                return 0;
            }
        }
    }
    
}
