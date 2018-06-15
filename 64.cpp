//https://informatics.msk.ru/moodle/mod/statements/view3.php?chapterid=64&run_id=2113r211085
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int w;
    for(int i=0; i<n; ++i)
    {
        cin >> a[i];
    }
    for(int i=0; i<=n-1; i++)
    {
        if(a[i]%2==0)
        {
            cout << a[i] << " ";
        }
    }
}
