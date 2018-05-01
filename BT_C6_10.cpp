#include<iostream>
#include<windows.h>
#include<conio.h>
#include<mylib.h>
using namespace std;
enum DIR {
	N,
	S,
	E,
	W
};
char dirC[5] = {'N','S','E','W'};
class ANGLE {
	private:
		int degrees;
		float minutes;
		DIR direction; 
	public:
		ANGLE(){};
		ANGLE(int degrees,float minutes, DIR direction){this->degrees=degrees; this->minutes = minutes; this->direction = direction;};
		~ANGLE(){};
		void display();
		char converEtoC(DIR direction);
		void setAngle(int degrees,float minutes, char direction)
		{
			this->degrees=degrees;
			this->minutes = minutes;
			switch(direction)
			{
				case 'n': this->direction = N;break;
				case 'e': this->direction = E;break;
				case 's': this->direction = S;break;
				case 'w': this->direction = W;break;
				default: this->direction = N;
			}
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
	numberShip.answer();
}
void OBJECT::answer(){
	cout<<"I am object number "<<seria<<endl;
}
unsigned int OBJECT::count = 0;
char ANGLE::converEtoC(DIR direction){
	return dirC[direction];
} 
void ANGLE::display(){
	cout<<degrees<<'\xF8'<<minutes<<"' "<<converEtoC(direction);
}
void ANGLE::enterAngle(){
	cout<<"Degrees: ";
	cin >> degrees;
	cout<<"Minutes: ";
	cin>>minutes;
	cout<<"Direction: ";
	char key = 0;
	int x = wherex();
	int y = wherey();
	do{
		key = getche();
		
		switch(key){
		case 'N':{
			direction = N;
			key = 27;
			break;
		}
		case 'S':{
			direction = S;
			key = 27;
			break;
		}
		case 'E':{
			direction = E;
			key = 27; 
			break;
		}
		case 'W':{
			direction = W;
			key = 27;
			break;
			}
		default:{
			gotoxy(x+10,1);			
			cout<<"Erro"<<endl;
			Sleep(1000);
			gotoxy(x,y);
			cout<<"     ";
			break;
			}
		}	
	}while(key!=27);
	
}

