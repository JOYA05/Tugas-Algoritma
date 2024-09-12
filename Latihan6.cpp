#include<iostream>
using namespace std;

int main()
{
	
	string namaBarang;
	float harga,totalHarga,diskon,totalbayar;
	int jumlahJual;
	
	
	cout<<"NamaBarang: ";
	cin>>namaBarang;
	cout<<"Harga Barang: ";
	cin>>harga;
	cout<<"Jumlah Jual: ";
	cin>>jumlahJual;
	totalHarga=harga * jumlahJual;
	diskon = totalHarga * 0.10;
	totalbayar = totalHarga-diskon;
	cout<<"PENJUALAN BARANG ELEKTRONIK"<<totalbayar<<endl;
	cout<<"Harga Per Barang:";
	cout<<"Total Harga:";
	cout<<"diskon 10%:";
	cout<<"Total Bayar: Rp"<<totalbayar<<endl;
	
	return 0;
}
