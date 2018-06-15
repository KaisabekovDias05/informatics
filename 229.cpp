//https://informatics.msk.ru/moodle/mod/statements/view3.php?chapterid=229&run_id=22r44019
#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i=0;i<n;++i)
  {
    cin >> a[i];
  }
  int max=a[0];
  for(int i=0;i<n;++i)
  {
      if(a[i]>max)
      {
        max=a[i];
      }
  }
  for(int i=0;i<n;++i)
  {
    if(a[i]==max)
    {
      swap(a[i],a[0]);
      break;
    }
  }
  for(int i=0;i<n;i++)
  {
    cout << a[i] << " ";
  }
}

}
