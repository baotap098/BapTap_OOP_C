#pragma
#include<iostream>
using namespace std;
struct date{
	int day;
	int month;
	int year;
};
class Date{
	private:
		unsigned	int day;
		unsigned	int month;
		unsigned	int year;
	public:
		Date(){day = 0; month = 0; year = 0;}
		unsigned int getDay(){
			return day;
		}
		unsigned int getMonth(){
			return month;
		}
		unsigned int getYear(){
			return year;
		}
		//*********************************
		void setDay(unsigned int day){
			this->day = day;
		}
		void setMonth(unsigned int month){
			this->month = month;
		}
		void setYear(unsigned int year){
			this->year = year;
		}
		void getdate(date);
		bool check(date);
		void display();
};
void Date::display(){
	cout<<day<<"/"<<month<<"/"<<year<<endl;
}
void Date::getdate(date d){
	if(check(d))
	{
		this->day = d.day;
		this->month = d. month;
		this->year = d.year;
	}
	else
	{
		this->day = 0;
		this->month = 0;
		this->year = 0;
	}
}
bool Date::check(date d){
	if(d.day < 0 || d.month < 0|| d.year < 0)
	{
		cout<<"Ngay hoac Thang hoac Nam sai\n";
		return false;
	}
	switch(d.month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: if(d.day > 31) {cout<<"Ngay sai\n";return false;} break;
		case 4: case 6: case 9: case 11: if(d.day > 30) {cout<<"Ngay sai\n";return false;} break;
		case 2: if(d.year%4==0)// nhuan
				{
					if(d.day > 29)
					{
						cout<<"Ngay sai (<=29)\n";
						return false;
					}
					
				}
				else
					if(d.day > 28) 
					{
						cout<<"Ngay sai (<=28)\n"<<d.year % 4<<"\n" ;
						return false;
					}
				break;
		default: cout<<"Thang sai\n"; return false;
	}
	return true;
}
