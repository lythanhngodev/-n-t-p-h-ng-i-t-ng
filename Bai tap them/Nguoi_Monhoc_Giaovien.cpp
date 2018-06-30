#include<cstdlib>
#include<iostream>
#include<string.h>
using namespace std;
class Nguoi{
	private:
		char* Hoten;
		int Namsinh;
	public:
		Nguoi(){
			Hoten = new char [50];
			strcpy(Hoten, "Ngo Thanh Ly");
			Namsinh = 1996;
		}
		Nguoi(char* Hoten1, int Namsinh1){
			Hoten = new char [50];
			strcpy(Hoten,Hoten1);
			Namsinh = Namsinh1;			
		}
		void Innguoi(){
			cout<<"Ten nguoi: "<<Hoten;
			cout<<"\nSinh nam: "<<Namsinh;
		}
		~Nguoi(){
			delete(Hoten);
		}
};
class Monhoc{
	private:
		char* Tenmh;
		int Sotiet;
	public:
		Monhoc(){
			Tenmh = new char [50];
			strcpy(Tenmh, "LTCB");
			Sotiet = 3;
		}
		Monhoc(char* Tenmh1, int Sotiet1){
			Tenmh = new char [50];
			strcpy(Tenmh, Tenmh1);
			Sotiet = Sotiet1;
		}
		void Inmh(){
			cout<<"\nTen mon hoc: "<<Tenmh;
			cout<<"\nSo tiet: "<<Sotiet;
		}
		~Monhoc(){
			delete(Tenmh);
		}
};
class Gv : public Nguoi{
	private:
		char* Bomon;
		Monhoc Daymon;
	public:
		Gv():Nguoi(){
			Bomon = new char [50];
			strcpy(Bomon, "Lap Trinh");
		}
		void Ingv(){
			Nguoi::Innguoi();
			cout<<"\nGiang day bo mon: "<<Bomon;
			Daymon.Inmh();
		}
		~Gv(){
			delete(Bomon);
		}
};

main()
{
	Gv a;
	a.Ingv();
	cout<<"\n";
	system("PAUSE");
}
