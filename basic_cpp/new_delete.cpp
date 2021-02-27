#include "iostream"
using namespace std;

int main()
{
  int *a, sum = 0, i;
  a = new int[6];

  for(i=0 ; i<6; i++)
    a[i] = i+1;

  for(i=0 ; i<6; i++)
    sum += a[i];

  delete[] a;

  // for(i=0 ; i<6; i++)
  //   sum += a[i];


  cout << sum;

  return 0;
}
