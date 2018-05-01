#include<iostream>
#include<conio.h>
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
		void setAngle(int degrees,float minutes, char direction);
		char converEtoC(DIR direction);
		void enterAngle();
		
};
int main()
{
	ANGLE angle(-150,145,N),angle_;
	angle.display();
	int degrees;
	float minutes;
	char dir = 0;
	char key = 0 ;
	do
	{
		cout<<"Degrees: ";
		cin >> degrees;
		cout<<"Minutes: ";
		cin>>minutes;
		cout<<"Direction (not caps lock): ";
		dir = getche();
		cout<<"\nYour angle: ";
		angle_.setAngle(degrees,minutes,dir);
		angle_.display();
		cout<<"\nIf you want end, you need press ESC, else press any key..."<<endl;
		key = getch();
	}while(key!=27);
	system("pause");
	return 0;
}
void ANGLE::setAngle(int degrees,float minutes, char direction)
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
char ANGLE::converEtoC(DIR direction){
	return dirC[direction];
} 
void ANGLE::display(){
	cout<<degrees<<'\xF8'<<minutes<<"' "<<converEtoC(direction)<<endl;
}
void ANGLE::enterAngle(){
	cout<<"Degrees: ";
	cin >> degrees;
	cout<<"Minutes: ";
	cin>>minutes;
	cout<<"Direction: ";
	char key = 0;
	key = getche();
	switch(key){
		case 'N':{
			direction = N;
			break;
		}
		case 'S':{
			direction = S;
			break;
		}
		case 'E':{
			direction = E; 
			break;
		}
		case 'W':{
			direction = W;
			break;
		}
		default:{
			cout<<"Sai du lieu!!!";
			break;
		}
	}
}


