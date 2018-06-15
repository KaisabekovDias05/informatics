//https://informatics.msk.ru/moodle/mod/statements/view3.php?chapterid=1456&run_id=2115r167679
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int v=0;
    for(int i=0; i<n; ++i)
    {
        cin >> a[i];
    }
    int c;
    cin >> c;
    for(int i=0; i<n; i++)
    {
        if(a[i]>=c)
        {
            v=v+1;
        }
    }
    cout << v+1;
}
