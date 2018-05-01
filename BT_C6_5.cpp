#include<iostream>
#include"Date.h"
// Class da duong dinh nghia trong Date.h
using namespace std;
int main(){
	
	Date df;
	date dg;
	char c;
	dg.day = 25;
	dg.month = 5;
	dg.year = 1988;
	df.getdate(dg);
	df.display();
	system("pause");
	return 0;
}
