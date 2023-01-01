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

//This function will return the index of minimum element from i to n-1 The error in this function it just call itself till value of index of 3
/*int getIndexOfMinElementFromiToEnd(vector<int>A, int i)
{
    int ans= -1;
    int index = 0;
    for(int j=i; j<=A.size()-1;j++){
        if(ans>=A[j]){
            ans=A[j];
            index=j;
        }
    }
	return index;
}*/


void sort(vector<int>&A)
{
	for(int i=0;i<A.size();i++)
	{
		/*int j=getIndexOfMinElementFromiToEnd(A,i);*/
        for(int j=i; j<=A.size()-1;j++){
        if(A[i]>=A[j]){
            swap(A[i],A[j]);
        }
    }
		cout<<"i: "<<i<<" vector: ";
		printVector(A);
	}
}

int main() {
	vector<int>A= {6,1,2,3,4,6,1,2,1,5,7,9};
	
	sort(A);
	cout<<"sorted vector: ";
	printVector(A);
	
	return 0;
}
