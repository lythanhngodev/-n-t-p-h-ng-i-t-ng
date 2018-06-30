#include<cstdlib>
#include<iostream>
using namespace std;
class Ve{
	private:
		char Sohieu[20];
		char Den[50];
		char Di[50];
		float Dodai;
		long Mucgiatran;
	public:
		void Nhapmb(){
			cout<<"Nhap so hieu may bay: ";
			cin.ignore();
			cin.getline(Sohieu,20);
			cout<<"Nhap ten san bay di: ";
			cin.getline(Di,50);
			cout<<"Nhap ten san bay den: ";
			cin.getline(Den,50);
			cout<<"Nhap do dai hanh trinh: ";
			cin>>Dodai;
			cout<<"Muc gia: ";
			cin>>Mucgiatran;
		}
		long Giave(){
			if(Dodai>1200) return (Mucgiatran*1.5);
			else
			if(Dodai>500 && Dodai<=1200) return (Mucgiatran*1.2);
			else
				return Mucgiatran;
		}
		void In(){
			cout<<"\nSo hieu may bay: "<<Sohieu;
			cout<<"\nTen san bay di: "<<Di;
			cout<<"\nTen san bay den: "<<Den;
			cout<<"\nDo dai hanh trinh: "<<Dodai;
			cout<<"\nMuc gia tran: "<<Giave();
		}
};
class Hanhkhach{
	private:
		char Makhach[20];
		char Hoten[50];
		char Diachi[50];
		int Sove;
		Ve a[100];
	public:
		void Nhapkhach(){
			cout<<"Nhap ma khach: ";
			cin.ignore();
			cin.getline(Makhach,20);
			cout<<"Nhap ho ten khach: ";
			cin.getline(Hoten, 50);
			cout<<"Nhap dia chi khach: ";
			cin.getline(Diachi,50);
			cout<<"Nhap so ve khach mua: ";
			cin>>Sove;
			for(int i = 1; i<=Sove; i++){
				cout<<"=====Nhap thong tin ve thu "<<i<<"=====\n";
				a[i].Nhapmb();
			}
		}
		long Tinhtien(){
			long Tong;
			int i;
			for(i=1;i<=Sove;i++){
				Tong = Tong + a[i].Giave();
			}
			return Tong;
		}
		void Inkhach(){
			cout<<"\n=====THONG TIN KHACH HANG=====\n";
			cout<<"Ma khach: "<<Makhach;
			cout<<"\nTen khach: "<<Hoten;
			cout<<"\nDia chi: "<<Diachi;
			cout<<"\nSo ve: "<<Sove;
			cout<<"\n-----Thonng tin ve-----\n";
			for( int i=1;i<=Sove;i++){
				a[i].In();
			}
			cout<<"\nTong tien hanh khach phai tra: "<<Tinhtien();
			
		}
		int Tongsove(){
			return Sove;
		}
};
main()
{
	int n,j;
	Hanhkhach b[30];
	do{
		cout<<"Cho biet so luong khach hang: "; cin>>n;
	}while(n<2 || n>30);
	for (j=1;j<=n;j++){
		cout<<"\n===== NHAP KHACH HANG THU "<<j<<" =====\n";
		b[j].Nhapkhach();
	}// in thong tin khach hang co tong ve > 3
	for (j=1;j<=n;j++){
		if(b[j].Tongsove()>3) b[j].Inkhach();
	}
}
