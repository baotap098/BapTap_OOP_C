#include<iostream>
#include<conio.h>
using namespace std;
class tolBooth{
	private:
		unsigned totalNumberCar;
		float totalAmount;
	public:
		tolBooth(){ totalNumberCar = 0; totalAmount = 0.0f;}
		tolBooth(int totalNumberCar, float totalAmount){
			this->totalNumberCar = totalNumberCar;
			this->totalAmount = totalAmount;
		}
		void payingCar();
		void nopayCar();
		void display();
};
int main(){
	
	tolBooth bot;
	int dem = 0;
	char key=0;
	cout<<"- Nhan P de cho xe thu phi qua.\n";
	cout<<"- Nhan N de cho xe mien phi qua.\n";
	int x, y;
	do{
		if(kbhit()){
			key= getch();// getche(): e la echo;
			switch(key)
			{
				case 'p':{
					system("cls");
					cout<<"- Nhan P de cho xe thu phi qua.\n";
					cout<<"- Nhan N de cho xe mien phi qua.\n";
					cout<<"Vua thu them phi tu xe.\n";
					bot.payingCar();
					break;
				}
				case 'n':{
					system("cls");
					cout<<"- Nhan P de cho xe thu phi qua.\n";
					cout<<"- Nhan N de cho xe mien phi qua.\n";
					cout<<"Mien phi.\n";
					bot.nopayCar();
					break;
				}
			}
		}
	}while(key!=27);
	
	bot.display();
	
	system("pause");
	return 0;
}
void tolBooth::display(){
	cout<<"Total Number Car:"<<totalNumberCar<<endl;
	cout<<"Total Amount:"<<totalAmount<<endl;
}
void tolBooth::nopayCar() {
	++totalNumberCar;
}
void tolBooth::payingCar(){
	++totalNumberCar;
	totalAmount += 0.5;
}
