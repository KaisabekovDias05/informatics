//https://informatics.msk.ru/moodle/mod/statements/view3.php?chapterid=340&run_id=2114r230825
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int i;
    for(i=1;i<=a;++i)
    {
        if(a%i==0)
        {
            cout << i << " ";
        }
    }
}
}
