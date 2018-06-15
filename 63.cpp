//https://informatics.msk.ru/moodle/mod/statements/view3.php?chapterid=63&run_id=2113r211079
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; ++i)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(i%2==0){
            cout << a[i] <<" ";
        }
    }
}
