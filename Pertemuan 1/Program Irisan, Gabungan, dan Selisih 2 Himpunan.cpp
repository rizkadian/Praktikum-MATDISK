#include <iostream>
using namespace std;
int main()
{
	int i, j, a[20], b[20], dataA, dataB;
	
	cout<<"==============================================================="<<endl;;
	cout<<" PROGRAM MENCARI IRISAN, GABUANGAN, DAN SELISIH SUATU HIMPUNAN"<<endl;
	cout<<"==============================================================="<<endl;
	
	cout<<"\nMasukkan Jumlah Anggota Himpunan A : ";
	cin>>dataA;
	for(i=0; i<dataA; i++)
	{
		cout<<" - Masukkan anggota  "<<i+1<<" : ";
		cin>>a[i];
	}
	 
	cout<<"\nMasukkan Jumlah Anggota Himpunan B : ";
	cin>>dataB;
	for(i=0; i<dataB; i++)
	{
		cout<<" - Masukkan anggota "<<i+1<<" : ";
		cin>>b[i];
	}
	
	cout<<"\nDaftar Anggota Himpunan A = { ";
	for(i=0; i<dataA; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"}";
	
	cout<<"\nDaftar Anggota Himpunan B = { ";
	for(i=0; i<dataB; i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<"}";
	
	cout<<"\n\nIrisan dari Anggota Himpunan A dan Himpunan B = { ";
	for(i=0; i<dataA; i++)
	{
		for(j=0; j<dataB; j++)
		{
			if(a[i]==b[j])
			cout<<a[i]<<" ";
		}
	}
	cout<<"}";
	
	cout<<"\nGabungan dari Anggota Himpunan A dan Himpunan B = { ";
	for(i=0; i<dataA; i++)
	{
		cout<<a[i]<<" ";
	}
	for(i=0; i<dataB; i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<"}";
	
	cout<<"\nSelisih dari Anggota Himpunan A dan Himpunan B = { ";
	for(i=0; i<dataA; i++)
	{
		for(j=0; j<dataB; j++)
		{
			if(a[i]==b[j])
			{
				break;
			}	
		}
		if(j==dataB)
		{
			cout<<a[i]<<" ";
		}
	}
	cout<<"}";
	return 0;
}  
