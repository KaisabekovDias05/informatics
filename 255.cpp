//https://informatics.msk.ru/moodle/mod/statements/view3.php?chapterid=255&run_id=2089r268286
#include<iostream>
using namespace std;
int main()
{
    int x,y,n,z;
    cin >> x >> y >> z >> n;
    if(abs(x-z)==abs(y-n))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
