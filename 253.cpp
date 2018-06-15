/*
 https://informatics.msk.ru/moodle/mod/statements/view3.php?chapterid=253&run_id=2089r268280
 */

#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if(x%4==0&&x%100!=0||x%400==0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
