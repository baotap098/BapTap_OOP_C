#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
class Fraction{
	private:
		int numerator;
		int denominator;
	public:
		Fraction(){};
		Fraction(int numerator,int denominator){
			this->numerator = numerator;
			this->denominator = denominator;
		};
		void enterFraction();
		Fraction sumFraction(Fraction);
		void lowterms();
		void display();
};

int main(){
	Fraction f1(2,5),f2(5,2), f3;// 2/5+5/2 
	char key = 0;
	do
	{
		f1.enterFraction();
		f2.enterFraction();
		f3 = f1.sumFraction(f2);
		f3.display();
		cout<<"\nIf you want end, you need press ESC, else press any key..."<<endl;
		key = getch();
		system("cls");	
	}while(key!=27);
	system("pause");
	return 0; 
}
void Fraction::lowterms(){
	long tnum, tden, temp, gcd;
	tnum = labs(numerator); // use non-negative copies
	tden = labs(denominator); // (needs cmath)
	if(tden==0 ) // check for n/0
	{
		cout << "Illegal fraction: division by 0";
		exit(1);
	}
	else if( tnum==0 ) // check for 0/n
	{
		numerator=0;
		denominator = 1;
		return;
	}
	while(tnum != 0)
	{
		if(tnum < tden) // ensure numerator larger
		{
			temp=tnum;
			tnum=tden;
			tden=temp;
		} // swap them
		tnum = tnum - tden; // subtract them}
	}
		gcd = tden; // this is greatest common divisor
		numerator = numerator / gcd; // divide both num and den by gcd
		denominator = denominator / gcd; // to reduce frac to lowest terms
}
void Fraction::enterFraction(){
	cout<<"Fraction : ";
	char c=0;
	cin>>numerator>>c>>denominator;
}
Fraction Fraction::sumFraction(Fraction b){
	Fraction c;
	c.denominator = b.denominator * denominator;
	c.numerator = b.numerator * denominator + numerator * b.denominator;
	return c;
}
void Fraction::display(){
	if(numerator!=denominator&&denominator!=1)
	{
	lowterms();
	cout<<numerator<<"/"<<denominator;
	}
	else
	{
	lowterms();
	cout<<numerator;
	}
}
