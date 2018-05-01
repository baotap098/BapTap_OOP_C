#include<iostream>
#include"Fraction.h"// Class duoc ding nghia ngoai file khac
using namespace std;
int main()
{
	Fraction 	f(2,8),
				f2(2,1),
				f3;
	f3 = f.fadd(f2);
	cout<<"Add Fraction:";
	f3.display();
	cout<<endl;
	f3 = f.fsub(f2);
	cout<<"Sub Fraction:";
	f3.display();
	cout<<endl;
	f3 = f.fdiv(f2);
	cout<<"Div Fraction:";
	f3.display();
	cout<<endl;
	f3 = f.fmul(f2);
	cout<<"Mul Fraction:";
	f3.display();
	cout<<endl;
	system("pause");
	return 0;
}
