#include<iostream>
#include<windows.h>
#include<conio.h>
#include<mylib.h>
using namespace std;
class ANGLE {
	private:
		int degrees;
		float minutes;
		char direction;
	public:
		ANGLE(){};
		ANGLE(int degrees,float minutes, char direction){this->degrees=degrees; this->minutes = minutes; this->direction = direction;};
		~ANGLE(){};
		int getdegrees(){
			return degrees;
		}
		float getminutes(){
			return minutes;
		}
		char getdirection(){
			return direction;
		}
		void setdegrees(int degrees){
			this->degrees = degrees;
		}
		void setminutes(float minutes){
			this->minutes = minutes;
		}
		void setdirection(char direction){
			this->direction = direction;
		}
		void display();
		void setAngle(int degrees,float minutes, char direction)
		{
			this->degrees=degrees;
			this->minutes = minutes;
			this->direction = direction;
		}
		void enterAngle();
		
};

class OBJECT{
	private:
	 	static unsigned int count;
	 	unsigned int serial;
	public:
		OBJECT(){
			count+=1;
			serial = count;
		}	
		void answer();
};
class Ship{
	private:
		ANGLE latitude;
		ANGLE longitude;
		OBJECT numberShip;
	public:
		Ship(){	};
		void enterInfo();
		void display();
};
int main()
{
	
	Ship sh1, sh2;
	cout<<"SH 1"<<endl;
	sh1.enterInfo();
	cout<<"====================\n";
	cout<<"SH 2"<<endl;
	sh2.enterInfo();
	
	sh1.display();
	sh2.display();
	
	system("pause");
	return 0;
}
void Ship::enterInfo(){
	cout<<"Latitude: "<<endl;	
	latitude.enterAngle();
	cout<<"-------------"<<endl;
	cout<<"Longitude: "<<endl;
	longitude.enterAngle();
}
void Ship::display(){
	cout<<"Position of Ship: ";
	latitude.display();
	longitude.display();
	cout<<endl;
	numberShip.answer();
}
void OBJECT::answer(){
	cout<<"I am object number "<<serial<<endl;
}
unsigned int OBJECT::count = 0;
void ANGLE::display(){
	cout<<degrees<<'\xF8'<<minutes<<"' "<<direction;
}
void ANGLE::enterAngle(){
	cout<<"Degrees: ";
	cin >> degrees;
	cout<<"Minutes: ";
	cin>>minutes;
	cout<<"Direction: ";
	do
	{
		fflush(stdin);
		cin>>direction;
		direction = toupper(direction);
	}
	while(direction != 'N' && direction != 'W' && direction != 'S' && direction != 'E');
}

