#include <iostream>
using std :: cout;
using std :: cin;

// Finding max in array

int findMax(int arr[], int n)
{
  int i,max;
  max = arr[0];
  for (i=1 ; i<n; i++)
  {
    if(max < arr[i])
      max = arr[i];
  }
  return max;
}

int main()
{
  int size,i;

  cin >> size;
  int arr[size];

  for(i=0; i<size; i++)
    cin >> arr[i];

  cout << findMax(arr,size);

  return 0;
}
