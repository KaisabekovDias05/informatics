/*
 https://informatics.msk.ru/moodle/mod/statements/view3.php?chapterid=253&run_id=2089r268280#1
 */

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    if(a>b)
    {
        cout << "1";
    }
    if(b>a)
    {
        cout << "2";
    }
    if(a==b)
    {
        cout << "0" ;
    }
}
