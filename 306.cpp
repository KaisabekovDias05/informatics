//https://informatics.msk.ru/moodle/mod/statements/view3.php?chapterid=306&run_id=48r141842
#include <iostream>
#include <string>
using namespace std;
double min(double a, double b, double c, double d)
{
    return min(min(min(a,b),c),d);
}
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << min(min(min(a,b),c),d);
}
