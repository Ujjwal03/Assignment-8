
#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int>A)
{
  for(int i=0;i<A.size();i++)
  {
    cout<<A[i]<<" ";
  }
  cout<<"\n";
}

int getIndexOfMinElementFromiToEnd(vector<int>A, int i)
{

   int min_index = i;
   for(i<A.size(); i++)
   
   if(A[i]<A[min_index])
		{
			min_index = i;
		}
	}
	return min_index;
}

void sort(vector<int>&A)
{   
    for(int i=0;i<A.size(); i++)
    {
     int j= getIndexOfMinElementFromiToEnd(A,i);
     swap(A[i],A[j]);
     cout<<"i: <<i<<"vector: ";
     printVector(A);
    }
}

int main()
{
  vector<int>A = {9,7,4,3,1,4,5,6,7,4,5,10};
  sort(A);
  cout<<"Sorted Array :";
  printVector(A);
  
  return 0 ;
}  
