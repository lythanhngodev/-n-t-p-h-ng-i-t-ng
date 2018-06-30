#include<cstdlib>
#include<iostream>
using namespace std;
class Diem{
	private:
		int x;
		int y;
	public:
		Diem(){
			x = 0;
			y = 0;
		}
		Diem(int _x, int _y){
			x = _x;
			y = _y;
		}
		void InDiem(){
			cout<<"("<<x<<","<<y<<")";
		}
};

class HinhTron : public Diem{
	private:
		int r;
	public:
		HinhTron(){
			r = 0;
		}
		HinhTron(int _x, int _y, int _r) : Diem(_x,_y){
			r = _r;
		}
		int InBanKinh(){
			return r;
		}
};

main(){
	HinhTron a(2,3,8);
	cout<<"Tam hinh tron: ";a.InDiem();
	cout<<"\nBan kinh hinh trong: "<<a.InBanKinh();
	return 0;
}
