//https://informatics.msk.ru/moodle/mod/statements/view3.php?chapterid=73&run_id=2113r211216
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
        if(a[i]!=a[i+1])
        {
            w=w+1;
        }
    }
    cout << w+1;
}
