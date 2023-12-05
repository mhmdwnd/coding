#include <iostream>
#include <string>
using namespace std;

int main(){
	char pilih, mainlagi;
	int pc, total, uang, jumlah;
	do{
		cout <<"========================UJANG NET======================="<<endl;
		cout <<endl;
		cout <<"====================MAU MAIN DIMANA====================\n";
		cout <<"1. PC Biasa/1 jam                     Rp.3.000"<<endl;
		cout <<"2. PC VIP/1jam                        Rp.5.000" <<endl;
		cout <<"3. PC GHOIB/1jam                      Rp.10.000" <<endl;
		cout <<endl;
		cout <<"Mau main di PC yang mana? : ";
		cin>>pilih;
		if(pilih=='1'){
			cout<< "PC Biasa/jam \t Rp.3.000 \n";
			cout<<"Mau main berapa jam? : ";
			cin>>pc;
			total = pc * 3000;
			cout<<"Total nya segini yah : "<<total;
			cout<<endl;
			cout<<"Uang kamu berapa? : ";
			cin>>uang;
			if (total>uang){
				cout << "Uang kamu tidak cukup!";
			cout<<endl;
			}else if (jumlah=uang-total){
			cout<<"ini kembaliannya : "<<jumlah;
		}
		}else if(pilih=='2'){
			cout<<"PC VIP/jam \t Rp.5.000 \n";
			cout<<"Mau main berapa jam? : ";
			cin>>pc;
			total = pc * 5000;
			cout<<"Bayar dulu ya : "<<total;
			cout<<endl;
			cout<<"Uang kamu berapa? : ";
			cin>>uang;
			if (total>uang){
				cout << "Uang kamu tidak cukup!";
			cout<<endl;
			}else if (jumlah=uang-total){
			cout<<"ini kembaliannya : "<<jumlah;
		}
	 }else if(pilih=='3'){
	 	cout<<"PC GHOIB/jam \t Rp.10.000 \n";
			cout<<"Mau main berapa jam? : ";
			cin>>pc;
			total = pc * 10000;
			cout<<"Bayar dulu ya : "<<total;
			cout<<endl;
			cout<<"Uang kamu berapa? : ";
			cin>>uang;
			if (total>uang){
				cout << "Uang kamu tidak cukup!";
			cout<<endl;
			}else if (jumlah=uang-total){
			cout<<"ini kembaliannya : "<<jumlah;
		}
	}
	 else{
	 	cout<<"Pilihan yang anda inputkan tidak terdaftar! \n";
	 }
	 	cout<<"\n Apakah kamu mau menambah waktu bermain? (Y/T) : ";
	 	cin>>mainlagi;
	}while(mainlagi=='Y' || mainlagi=='y');
	while(mainlagi!='Y' || mainlagi=='y'){
		break;
	}
	cout<<endl;
	cout<<endl;
	cout<<"=============================Terimakasih!=============================\n"; 
	cout<<"====================Selamat bermain di UJANG NET!====================\n";

}
