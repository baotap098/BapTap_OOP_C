#include<iostream>
#include<conio.h>
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
		void display();
		void setAngle(int degrees,float minutes, char direction);
//		void enterLatitude();
//		void enterLongitude();
		void enterAngle();
};
int main()
{
	ANGLE angle(-150,145,'N'),angle_;
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
		do
		{
			fflush(stdin);
			cin>>dir;
			dir = toupper(dir);
		}
		while(dir != 'N' && dir != 'W' && dir != 'S' && dir != 'E');
		cout<<"\nYour angle: ";
		angle_.setAngle(degrees,minutes,dir);
		angle_.display();
		cout<<"\nIf you want end, you need press ESC, else press any key..."<<endl;
		key = getch();
	}while(key!=27);
	system("pause");
	return 0;
}
//void ANGLE::enterLatitude()
//{
//	do
//	{
//		cout<<"Enter Latitude: "<<endl;
//		cout<<"Degrees: ";	cin>>degrees;
//		cout<<endl;
//		do
//		{
//			cout<<"Minutes: ";
//			cin>>minutes;
//			cout<<endl;
//			if(minutes<0)
//			{
//				cout<<"Minutes >=0"<<endl;
//				cout<<"Again!"<<endl;
//			}
//		}while(minutes>=0);
//		degrees += (int)minutes%60;
//		minutes = (int) minutes%60;
//		if(degrees>90) 	cout<<"Error Latitude";
//	}while(degrees>90);
//
//	do
//	{
//		cout<<"Direction: ";
//		cin>>direction;
//		direction = toupper(direction);
//
//	}while(direction != 'N' && direction != 'S');
//}
//void ANGLE::enterLongitude()
//{
//	do
//	{
//		cout<<"Enter Longitude: "<<endl;
//		cout<<"Degrees: ";	cin>>degrees;
//		cout<<endl;
//		do
//		{
//			cout<<"Minutes: ";
//			cin>>minutes;
//			cout<<endl;
//			if(minutes<0)
//			{
//				cout<<"Minutes >=0"<<endl;
//				cout<<"Again!"<<endl;
//			}
//		}while(minutes>=0);
//		degrees += (int)minutes%60;
//		minutes =(int) minutes%60;
//		if(degrees>180) 	cout<<"Error Longitude";
//	}while(degrees>180);
//
//	do
//	{
//		cout<<"Direction: ";
//		cin>>direction;
//		direction = toupper(direction);
//
//	}while(direction != 'E' && direction != 'W');
//}
void ANGLE::setAngle(int degrees,float minutes, char direction)
{
	this->degrees=degrees;
	this->minutes = minutes;
	this->direction = direction;
}
void ANGLE::display(){
	cout<<degrees<<'\xF8'<<minutes<<"' "<<direction<<endl;
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


