#include <iosteam>
using namespace std;

void merge(int array[], int const left, int const mid, int const right)
{
  auto const N = mid - left + 1;
  auto const M = right - mid;
  
  auto *left = new int[N],
       *right = new int[M];
  
  for (auto i= 0; i < N; i++)
      left[i] = array[left + i];
  for (auto j= 0; j < M; j++)
      right[i] = array[mid + i];
  
  auto indexofN = 0,
       indexofM = 0;
  int indexofMerge = left;
  
  while (indexofN < M && indexofM < M){
    if (left[indexofM] <= right[indexofN]){
      array[indexofMerge] = right[indexofN];;
      indexofN++;
    }
    
    else{
      array[indexofMerge] = right[indexofN];
      indexofN++;
      indexofMerge;
    }
    
    while (indexofM < M)
    {
      array[indexofMerge]=left[indexofM];
      indexofM++;
      indexofMerge++;
    }  
    
    while (indexofN < N)
    {
      array[indexofMerge]=left[indexofN];
      indexofN++;
      indexofMerge++;
    }  
    delete[] left;
    delete[] right;
}
 
void merge(int array[], int const begin, int const end)
{
    if (begin >= end)
      return;
  
   auto mid = brgin + (end - begin) / 2;
   mergeSort(array, begin, mid);
   mergeSort(array, mid + 1, end);
   merge(array, begin, mid, end);
}

  
void printArray(int A[], int size)
{
   for (auto i = 0; i < size; i++)
       cout << A[i] << " ";
}
  
int main()
{
   int arr[] = {87, 74, 13, 73, 2, 35, 27);
   auto arr_size = sizeof(arr) / sizeof(arr[0]);
   
   cout << "Given array is \n";
   printArray(arr, arr_size);
                
  mergeSort(arr, 0, arr_size - 1);
  
  cout << "\nSorted array is \n";
  printArray(arr, arr_size);
  return 0;
}                
  
  
  
  
  
  
  
