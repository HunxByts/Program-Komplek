// PROGRAM KOMPLEKS FAISSS
// BUAT KONTER PAKET

#include <iostream>
#include <cstdlib>
using namespace std;

//warna ANSI

//Blu=\033[30m
//Red=\033[1;31m
//Gre=\033[1;32m
//Yel=\033[1;33m
//Blue=\033[1;34m
//Mage=\033[1;35m
//Cya=\033[1;36m
//Wha=\033[1;37m


int main() {
	//deklarasai variable
    char kode;
    char tlp[12];
    string pkt, hrg, msa, vc, nm;
    
    //banner menu
    cout<<"\033[1;37m===================================="<<endl;
    cout<<"||   \033[1;36m.:: \033[1;33mKONTER PAKET FAIS \033[1;36m::.    \033[1;37m||"<<endl;
    cout<<"===================================="<<endl;
    cout<<"||   \033[1;33mKode  \033[1;37m||    \033[1;33mPaket   \033[1;37m|| \033[1;33mHarga \033[1;37m||"<<endl;
    cout<<"===================================="<<endl;
    cout<<"||  \033[1;36m[ \033[1;33m1 \033[1;36m]  \033[1;37m||  \033[1;33mTre \033[1;36m3 GB  \033[1;37m|| \033[1;33m10000 \033[1;37m||"<<endl;
    cout<<"||  \033[1;36m[ \033[1;33m2 \033[1;36m]  \033[1;37m||  \033[1;33mEm3 \033[1;36m3 GB  \033[1;37m|| \033[1;33m20000 \033[1;37m||"<<endl;
    cout<<"||  \033[1;36m[ \033[1;33m3 \033[1;36m]  \033[1;37m||  \033[1;33mXl  \033[1;36m3 GB  \033[1;37m|| \033[1;33m30000 \033[1;37m||"<<endl;
    cout<<"||  \033[1;36m[ \033[1;33m4 \033[1;36m]  \033[1;37m|| \033[1;33mExis \033[1;36m3 GB  \033[1;37m|| \033[1;33m40000 \033[1;37m||"<<endl;
    cout<<"===================================="<<endl;
    
    //user input
    cout<<"\n\033[1;33mPelanggan memilih \033[1;36m[\033[1;33m1 \033[1;37m- \033[1;33m4\033[1;36m]       : \033[1;37m";
	cin>>kode;

	//kondisi saat user input pilihan    
    if (kode == '1'){
    	vc = "333002030201";
    	pkt = "Tre";
    	hrg = "10.000";
    	msa = "30 Hari";
	}
    else if (kode == '2'){
    	vc = "440929302939";
    	pkt = "Em3";
    	hrg = "20.000";
    	msa = "30 Hari";
	} 
	else if (kode == '3'){
		vc = "550294939302";
		pkt = "Xl";
		hrg = "30.000";
		msa = "30 Hari";
	}
	else if (kode == '4'){
		vc = "669273623481";
		pkt = "Exis";
		hrg = "40.000";
		msa = "30 Hari";
	} 
	//jika inputan lebih dari 4
	else if (kode >= '4'){
    	cout<<"\033[1;33mMaaf pilihan"<<kode<<"\033[1;33mtidak tersedia nih";
		cout<<endl;
		return 0;
	}
	//jika inputan kuang dari 1
	else if (kode <= '1'){
		cout<<"\033[1;33mMaaf pilihan"<<kode<<"\033[1;33mtidak tersedia nih";
		cout<<endl;
		return 0;
	}
	
	//Jika user berhasil memlih
	cout<<"\033[1;33mMasukan nama anda 	       \033[1;36m : \033[1;37m";
	cin>>nm;
	cout<<"\033[1;33mMasukan no telpon anda \033[1;36m[\033[1;33m+62xxx\033[1;36m] : \033[1;37m";
	cin>>tlp;
	system("cls");
	
	//struk pembelian
    cout<<"\033[1;37m--------------------------------"<<endl;
    cout<<"\033[1;37m|   \033[1;33mSTRUKTUR PEMBAYARAN ANDA   \033[1;37m|"<<endl;
    cout<<"\033[1;37m|   \033[1;33mDI FAIS CALL SEMUA MURAH   \033[1;37m|"<<endl;
    cout<<"\033[1;37m--------------------------------"<<endl;
	cout<<endl;
	
	
	//keterangan
	cout<<"\033[1;37mNama Pembeli  \033[1;36m: \033[1;33m"<<nm<<endl;
	cout<<"\033[1;37mJenis Kartu   \033[1;36m: \033[1;33m"<<pkt<<endl;
	cout<<"\033[1;37mNo Telpon     \033[1;36m: \033[1;33m"<<tlp<<endl;
	cout<<"\033[1;37mVoucher Kartu \033[1;36m: \033[1;33m"<<vc<<endl;
	cout<<"\033[1;37mHarga Voucher \033[1;36m: \033[1;33mRp."<<hrg<<endl;
	cout<<"\033[1;37mMasa Voucher  \033[1;36m: \033[1;33m"<<msa<<endl;
	cout<<"\033[1;37m--------------------------------"<<endl;
	cout<<"\033[1;33mTerimakasih  telah  berlangganan"<<endl;
	cout<<"\033[1;33mdi faiss call semua murah"<<endl;
	cout<<"\033[1;37m--------------------------------"<<endl;
	
	
	
	//program kompleks di buat sederhana mungkin 
	//agar mudah di pahami
	//salam Faiss | Huntrx 
	// # Gk papa coding yang penting jangan lupa sholat 5 waktu :)
	return 0;
}
