// Tao class Connguoi(ten, namsinh,diachi) - Hàm: tao, nhap, in
// Tao class Sinhvien ke thua tu Connguoi them thuoc tinh (masv, diem1, diem2) 
// - hàm tao, in, tinh tong diem, tinh diem trung binh
// Yeu cau: nhap 1 mang sinh vien
// - in mang sinh vien vua nhap
// - in thong tin sinh vien co diem cao nhat
#include<cstdlib>
#include<iostream>
#include<string.h>
using namespace std;
class Connguoi{
	private:
		char ten[50];
		int namsinh;
		char diachi[50];
	public:
		Connguoi(){
			strcpy(ten,"Ngo Thanh Ly");
			namsinh = 1996;
			strcpy(diachi,"Vinh Long");
		}
		Connguoi(char _ten[50], int _namsinh, char _diachi[50]){
			strcpy(ten,_ten);
			namsinh = _namsinh;
			strcpy(diachi,_diachi);
		}
		void NhapCN(){
			cout<<"Nhap ten: ";
			cin.getline(ten,50);
			cout<<"Nhap nam sinh: ";
			cin>>namsinh;
			cin.ignore();
			cout<<"Nhap dia chi: ";
			cin.getline(diachi,50);  
		}
		void InCN(){
			cout<<"\nTen: "<<ten;
			cout<<"\nNam sinh: "<<namsinh;
			cout<<"\nDia chi: "<<diachi;
		}
};
class Sinhvien:public Connguoi{
	private:
		char masv[10];
		float diem1;
		float diem2;
	public:
		Sinhvien(){
			strcpy(masv, "14004044");
			diem1 = 7.8;
			diem2 = 6.8;
		}
		Sinhvien(char _masv[10], float _diem1, float _diem2){
			strcpy(masv, _masv);
			diem1 = _diem1;
			diem2 = _diem2;
		}
		float diemtrungbinh(){
			return (diem1+diem2)/2;
		}
		void NhapSV(){
			NhapCN();
			cout<<"Nhap ma sinh vien: ";
			cin.getline(masv,50);
			cout<<"Nhap diem 1: ";
			cin>>diem1;
			cout<<"Nhap diem 2: ";
			cin>>diem2;
			cin.ignore();
		}
		void InSV(){
			InCN();
			cout<<"\nMa sinh vien: "<<masv;
			cout<<"\nDiem 1: "<<diem1;
			cout<<"\nDiem 2: "<<diem2;
			cout<<"\nDiem trung binh: "<<diemtrungbinh();
		}
		
};
main(){
	int n;
	cout<<"Cho biet co bao nhieu sinh vien: ";
	cin>>n;
	cin.ignore();
	Sinhvien sv[n];
	for(int i=0;i<n;i++){
		sv[i].NhapSV();
	}
	float max;
	for(int i=0;i<n;i++){
		if(sv[i].diemtrungbinh()>max) max = sv[i].diemtrungbinh();
	}
	cout<<"\nSinh vien cos diem cao nhat:\n";
	for(int i=0;i<n;i++){
		if(sv[i].diemtrungbinh()==max) sv[i].InSV();
	}
	return 0;
}
