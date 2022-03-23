#include<iostream>
using namespace std;
int main(){
	int pilihan,banyak,jumlah,total,tunai,kembalian,harga;
	float diskon;
	string menu;
	
	cout<<"============================="<<endl;
	cout<<"\tPILIHAN MENU"<<endl;
	cout<<"============================="<<endl;
	cout<<"\t1.Ayam Goreng Rp 17.000"<<endl;
	cout<<"\t2.Ayam Bakar  Rp 21.000"<<endl;
	cout<<"============================="<<endl;
	cout<<endl;
	cout<<"Masukkan Nama Makanan : "; cin>>pilihan;
	if(pilihan==1){
		menu = "Ayam goreng";
		harga = 17000;
		cout<<"Jumlah pesanan : "; cin>>banyak;
		jumlah = 17000 * banyak;
		cout<<"Total = "<<jumlah;
	}
	else if(pilihan==2){
		menu = "Ayam Bakar";
		harga = 21000;
		cout<<"Jumlah pesanan : "; cin>>banyak;
		jumlah = 21000 * banyak;
		cout<<"Total = "<<jumlah;
	}
	else{
		cout<<"Pilihan tidak tersedia"<<endl;
	}
	cout<<endl<<endl;
	cout<<"================================"<<endl;
		cout<<"\tSTRUK PEMBAYARAN"<<endl;
		cout<<"================================"<<endl;
		cout<<"Pilihan Menu\t: "<<"\n"<<menu<<endl;
		cout<<banyak<<" x "<<harga<<"\t Rp.\t"<<jumlah<<endl;
		cout<<"================================"<<endl;
		cout<<"\tJUMLAH : Rp.\t"<<jumlah<<endl;
		if(jumlah>45000){
			diskon = jumlah * 0.1;
			total = jumlah - diskon;
		}
		else{
			diskon = 0;
			total = jumlah - diskon;
		}
		cout<<"\tDISKON : Rp.\t"<<diskon<<endl;
		cout<<"\tTOTAL  : Rp.\t"<<total<<endl;
		cout<<"        TUNAI  : Rp.\t"; 
		cin>>tunai;
		cout<<"\t----------------------"<<endl;
		kembalian = tunai - total ;
		cout<<"    KEMBALIAN  : Rp.\t"<<kembalian<<endl;
		cout<<"================================"<<endl;
	return 0;
}
