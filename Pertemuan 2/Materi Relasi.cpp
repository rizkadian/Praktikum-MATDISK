#include <iostream> 
using namespace std;
int main() 
{
	string a[2], b[3];
	int c[3], d[5];
	
	cout<<"MASUKKAN ANGGOTA HIMPUNAN A"<<endl;
	for(int i=0; i<2; i++){
		cout<<"Anggota himpunan A ["<<i+1<<"] : ";
		cin>>a[i];
	}
	
	cout<<"\nMASUKKAN ANGGOTA HIMPUNAN B"<<endl;
	for(int i=0; i<3; i++){
		cout<<"Anggota himpunan B ["<<i+1<<"] : ";
		cin>>b[i];
	}
	
	cout<<"\nMASUKKAN ANGGOTA HIMPUNAN C"<<endl;
	for(int i=0; i<3; i++){
		cout<<"Anggota himpunan C ["<<i+1<<"] : ";
		cin>>c[i];
	}

	cout<<"\nMASUKKAN ANGGOTA HIMPUNAN D"<<endl;
	for(int i=0; i<5; i++){
		cout<<"Anggota himpunan D ["<<i+1<<"] : ";
		cin>>d[i];
	}
	
	cout<<"\nHASIL PENGGABUNGAN HIMPUNAN A dan B : \n {";
	for(int i=0; i<2; i++) 
	{
		for(int j=0; j<3; j++) 
		{
			cout<<"("<<a[i]<<", "<<b[j]<<")";
		}
	} cout<<"}"<<endl;
	
	cout<<"\nHASIL HIMPUNAN C HABIS MEMBAGI D : \n {"; 
	for(int k=0; k<3; k++) 
	{
		for(int l=0; l<5; l++) 
		{ 
			if(d[l]%c[k]==0) 
			{
				cout<<"("<<c[k]<<", "<<d[l]<<")";
			}
		}
	} cout<<"}"<<endl; 
	
	cout<<"\nHASIL HIMPUNAN D HABIS MEMBAGI C : \n {"; 
	for(int k=0; k<3; k++) 
	{
		for(int l=0; l<5; l++) 
		{ 
			if(c[k]%d[l]==0) 
			{
				cout<<"("<<c[k]<<", "<<d[l]<<")";
			}
		}
	} cout<<"}"<<endl;
 
	return 0;
}
