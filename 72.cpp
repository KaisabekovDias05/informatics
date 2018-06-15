//https://informatics.msk.ru/moodle/mod/statements/view3.php?chapterid=72&run_id=2113r211206
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int max;
    for(int i=0; i<n; ++i)
    {
        cin >> a[i];
    }
    max=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout << max;
    return 0;
    
}
