#include <iostream>
#include <vector>
 using namespace std;

 int main()
 {
  int sorting[]={8,4,15,23,16,42};
  vector<int> darray;
  for (int i=0;i<=5;i++)
  {
    darray.push_back(sorting[i]);
  }
  int MIN,key;
  for (int i=0;i<5;i++)
  {
    MIN=i;
    key=darray[i];
    for (int j=i+1;j<=5;j++)
    {
      if (darray[j]<darray[MIN])
      {
       MIN=j;
      }
    }
    darray[i]=darray[MIN];
    darray[MIN]=key;
  }
  for (int i=0;i<6;i++)
  {
      cout<<" "<<darray[i];
  }
  return 0;
 }
