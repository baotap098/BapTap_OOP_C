#pragma
#include<iostream>
#include<stdlib.h>
using namespace std;
class Fraction{
	private:
		int numerator;
		int denominator;
	public:
		Fraction(){
			numerator = 1;
			denominator = 1;
		};
		Fraction(int numerator,int denominator){
			this->numerator = numerator;
			this->denominator = denominator;
		};
		Fraction fadd(Fraction);
		Fraction fsub(Fraction);
		Fraction fmul(Fraction);
		Fraction fdiv(Fraction);
		
		void setNumerator(int numerator){
			this->numerator = numerator;
			}
		int getNumerator(){
			return this->numerator;
			}
		void setDenominator(int denominator){
			this->denominator = denominator;
			}
		int getDenominator(){
			return this->denominator;
			}
		void lowterms();
		void display(){
			cout<<numerator<<"/"<<denominator;
		}
};
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
Fraction Fraction::fadd(Fraction fr2){
	Fraction f;
	f.numerator = numerator*fr2.denominator + fr2.numerator*denominator;
	f.denominator = denominator*fr2.denominator;
	f.lowterms();
	return f;
}
Fraction Fraction::fsub(Fraction fr2){
	Fraction f;
	f.numerator = numerator*fr2.denominator - fr2.numerator*denominator;
	f.denominator = denominator*fr2.denominator;
	f.lowterms();
	return f;
}
Fraction Fraction::fmul(Fraction fr2){
	Fraction f;
	f.numerator = numerator*fr2.numerator;
	f.denominator = denominator*fr2.denominator;
	f.lowterms();
	return f;
}
Fraction Fraction::fdiv(Fraction fr2){
	Fraction f;
	f.numerator = numerator*fr2.denominator;
	f.denominator = denominator*fr2.numerator;
	f.lowterms();
	return f;
}




