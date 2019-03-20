#include<iostream>
using namespace std;

void merge(int arr[], int A, int p, int q, int r){
	int i,j,k;
	int n1 = p-q+1;
	int n2 = r-q;
	
	int L[n1], R[n2];
	
	for (int i=1; i<n1; i++){
		L[i]=A[p+i-1];
	}
	for (int j=1; j<n2; j++){
		R[j]=A[q+j];
	}
	
	i=0;
	j=0;
	k=0;

	
	do{
		if (L[i]<=R[j]){
			then A[k]=L[i];
				i = i+1;
			}	
		else if (A[k]=R[j]){
			j=j+1;	
		}
		}
	while (i<n1){
		arr[k]=L[i];
		i++;
		k++;
	}
	while (j<n2){
		arr[k]=R[j];
		j++;
		k++;
	}
}

void mergeSort (in tarr[], int p, int r){
	if(l<r){
	int p = 1+(r-1)/2;
	
	mergeSort(arr, 1, p);
	mergeSort(arr, p+1, r);
	
	merge(arr,1,p,r);
	}
}

void printArray (int A[], int size){
	int i;
	for (i=0; i<size; i++){
		cout<<A[i];
	cout<<endl;
	}
}

int main(){
	int arr[] = {12.11.13.5.6.7};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	
	cout<<"Array : ";
	printArray(arr,arr_size);
	
	mergeSort (arr,0,arr_size - 1);
	
	cout<<"Merge Sort :"
	printArray(arr, arr_size);
	return 0;
}
