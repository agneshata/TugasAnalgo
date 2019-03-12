#include<iostream>
#include<conio.h>
using namespace std;

main(){
	int x,a[100],i,t,j,k, pilih;

 	cout<<"Insertion Sort";
   	cout<<"\nMasukkan banyak bilangan = ";
	cin>>x;
   	
	for(i=1;i<=x;i++){
    	cout<<"\nBilangan ke-"<<i<<" : ";
		cin>>a[i];
   	}
   	
	cout<<"\n\nData Sebelum diurutkan :";
   	for(i=1;i<=x;i++){
    	cout<<"  "<<a[i];
   	}
   	cout<<endl;
   	
   	//Descending
   	for(i=1;i<=x;i++){
    	for(j=1;j<=i;j++){
       		if(a[i]>a[j]){
       			t=a[i];
       	   		a[i]=a[j];
           		a[j]=t;
   			}
   		}
    cout<<"\n# "<<i<<" : ";
    	for(k=1;k<=i;k++){
    	   cout<<"  "<<a[k];
  			}
   		}
   	cout<<"\nData diurutkan secara Descending : ";
   		for(i=1;i<=x;i++){
			cout<<"  "<<a[i];
		}
		cout<<endl;
	
	//Ascending	
	/*for(i=1;i<=x;i++){
    	for(j=1;j<=i;j++){
       		if(a[i]>a[j]){
       			t=a[i];
       	   		a[i]=a[j];
           		a[j]=t;
   			}
   		}
    cout<<"\n# "<<i<<" : ";
    	for(k=1;k<=i;k++){
    	   cout<<"  "<<a[k];
  			}
   		}	
	   	
   	cout<<"\nData diurutkan secara Ascending : ";
   		for(i=x;i<x;i--){
			cout<<"  "<<a[i];
		}
		cout<<endl;*/
}
   	






