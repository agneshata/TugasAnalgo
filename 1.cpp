#include<iostream>
using namespace std;

int main(){
	int i, n;
	int maks;
	
	cout<<"Jumlah Nilai : ";
	cin>>n;
	
	float x[n];
	for (int i=1; i<=n; i++){
		cout<<"Masukkan angka : ";
		cin>>x[i];
	}
	maks = x[1];
	for (int i=2; i<=n; i++){
		if(maks<x[i]){
			maks = x[i];
		}
	}
	cout<<"Nilai terbesar adalah "<<maks;
}

































