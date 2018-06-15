//https://informatics.msk.ru/moodle/mod/statements/view3.php?chapterid=71&run_id=2113r211184
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
        swap(a[n-1-i],a[n-1-i-1]);
    }
    for(int i=0; i<n; ++i)
    {
        cout << a[i] << " ";
    }
}
