#include<iostream>
using namespace std;

int main(){
	int n, cari, Data[10];
	int i, ketemu;
	
	cout<<"Banyak data yang akan di input : ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"\nData ke-"<<i<<" : ";
		cin>>Data[i];
	}
	
	cout<<"\nMasukkan angka yang ingin di cari : ";
	cin>>cari;
	
	ketemu=0;
	while((i<10)&&(ketemu==0)){
		if(Data[i]==cari){
			ketemu=1;
			cout<<"\nPencarian Sequential "<<cari<<" ada pada indeks ke-"<<i;
		}
		else
		i=i+1;
	}
	if(ketemu==1)	
		cout<<"\nData ada dalam larik"<<endl;
	else
		cout<<"Data tidak ada dalam larik"<<endl;
	}










