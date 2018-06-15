//https://informatics.msk.ru/moodle/mod/statements/view3.php?chapterid=65&run_id=2113r211112
#include <iostream>
using namespace std;
int main()
 {
  int n;
  cin >> n;
  int a[n];
  for(int i=0;i<n;++i)
  {
    cin >> a[i];
  }
  int max=a[0];
 for(int i=0;i<n-1;i++)
 {
   for(int j=i+1;j<n;++j)
   {
     if(a[i]>a[j])
     {
       swap(a[i],a[j]);
     }
   }
 }
 for(int i=0;i<n;++i)
 {
   cout << a[i] << " ";
 }
}}
