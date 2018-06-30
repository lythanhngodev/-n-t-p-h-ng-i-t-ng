#include<cstdlib>
#include<iostream>
#include<math.h>
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
		void NhapDiem(){
			cout<<"Nhap toa do x: ";
			cin>>x;
			cout<<"Nhap toa do y: ";
			cin>>y;
		}
		float KhoangCach(Diem a){
			return sqrt(pow(x-a.x,2)+pow(y-a.y,2));
		}
};

main(){
	Diem a(3,4),b;
	cout<<"Toa do diem a: ";a.InDiem();
	cout<<"\nNhap toa do b:\n";
	b.NhapDiem();
	cout<<"Nhap toa do diem b: ";b.InDiem();
	cout<<"\nKhoang cach a -> b : "<<a.KhoangCach(b);
	return 0;
}
