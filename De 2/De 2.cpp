#include<cstdlib>
#include<iostream>
using namespace std;
class PhanSo{
	private:
		int tu;
		int mau;
	public:
		PhanSo(){
			tu=1;
			mau=1;
		}
		PhanSo(int _tu, int _mau){
			tu = _tu;
			mau = _mau;
		}
		void NhapPhanSo(){
			cout<<"Nhap tu: ";
			cin>>tu;
			// lenh nhay lap lai khi nhap sai mau
			nhapmau:
			cout<<"Nhap mau: ";
			cin>>mau;
			if(mau==0){
				cout<<"Mau so phai khac 0, nhap lai!\n";
				goto nhapmau;
			}
		}
		void InPhanSo(){
			if(tu==0) cout<<"0";
			else if(tu==mau){
				cout<<"1";
			}
			else if(tu*mau<0){
				cout<<"-"<<tu<<"/"<<mau;
			}
			else{
				cout<<tu<<"/"<<mau;
			}
		}
		PhanSo & operator+(PhanSo &a){ // qua tai +
			PhanSo t;
			t.tu = tu*a.mau+a.tu*mau;
			t.mau = mau*a.mau;
			return t;
		}
		PhanSo & operator-(PhanSo &a){ // qua tai -
			PhanSo t;
			t.tu = tu*a.mau-a.tu*mau;
			t.mau = mau*a.mau;
			return t;
		}
};

main(){
	PhanSo a(3,7),b,cong,tru;
	a.InPhanSo();
	cout<<"\nNhap phan so b: \n";
	b.NhapPhanSo();
	cong = a+b;
	tru = a-b;
	cout<<"Ket qua cong 2 phan so: "; cong.InPhanSo();
	cout<<"\nKet qua tru 2 phan so: "; tru.InPhanSo();
	return 0;
}
