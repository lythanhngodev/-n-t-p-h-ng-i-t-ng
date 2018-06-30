#include<cstdlib>
#include<iostream>
using namespace std;
class Clock{
	private:
		int gio;
		int phut;
		int giay;
	public:
		Clock(int _gio, int _phut, int _giay){
			gio = _gio;
			phut = _phut;
			giay = _giay;
		}
		void NhapClock(){
			cout<<"Nhap gio: ";
			cin>>gio;
			cout<<"Nhap phut: ";
			cin>>phut;
			cout<<"Nhap giay: ";
			cin>>giay;
		}
		void InClock(){
			cout<<gio<<":"<<phut<<":"<<giay;
		}
		void ThemPhut(int _phut){
			gio+= (phut+_phut)/60;
			phut = (phut+_phut)%60;
		}
};
main(){
	cout<<"===== CLOCK =====\n";
	Clock a(9,15,38);
	cout<<"Gio la: ";a.InClock();
	a.ThemPhut(45);
	cout<<"\nGio them 45 phut la: "; a.InClock();
	return 0;
}
