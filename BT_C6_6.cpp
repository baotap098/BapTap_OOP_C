#include<iostream>
#include"Date.h"
using namespace std;
enum etype {
	laboder,	//l
	secretary,	//s
	manager,	//m
	accountant,	//a
	executive,	//e
	researcher	//r
};
class employee{
	private:
		int numberEmployee;
		float compensation;
		etype _etype;
		Date date;
	public:
		employee(){numberEmployee = 0; compensation = 0.0f;};
		~employee(){};
		int getEtype(){
			return _etype;
		}
		int getNum(){
			return numberEmployee;
		}
		float getCom(){
			return compensation;
		}
		void setEtype(etype _etype){
			this->_etype = _etype;
		}
		void setNum(int num){
			this->numberEmployee = num;
		}
		void setCom(int com){
			this->compensation = com;
		}
		
		void EnterInfoEmployee();
		void display();
};

int main(){
	employee e[3];
	for(int i = 0;i<3;++i)
	{
		e[i].EnterInfoEmployee();
		cout<<endl;
	}
	cout<<"-----------------------\n";
	for(int i = 0;i<3;++i)
	{
		e[i].display();
		cout<<endl;
	}
	system("pause");
	return 0;
}

void employee::display() {
	cout<<"Number Employee: "<<numberEmployee<<endl;
	cout<<"Compensation Employee: "<<compensation<<"\n";
	cout<<"Employee type: ";
	switch(_etype){
		case laboder:{
			cout<<"laboder";
			break;
		}
		case secretary:{
			cout<<"secretary";
			break;
		}	
		case manager:{
			cout<<"manager";
			break;
		}
		case accountant:{
			cout<<"accountant";		
			break;
		}
		case executive:{
			cout<<"executive";
			break;
		}
		case researcher:{
			cout<<"researcher";		
			break;
		}
	}
	cout<<endl;
	date.display();
}
void employee::EnterInfoEmployee(){
	cout<<"Enter NUMBER EMPLOYEE: "; cin>>numberEmployee;
	cout<<"Enter COMPENSATION: ";cin>>compensation;
	cout<<"Enter DATE (dd/mm/yyyy):";
	char c;
	unsigned int day, month, year;
	cin>>day>>c>>month>>c>>year;
	cout<<"Enter ETYPE:";
	char key=0;
	cin>>key;
	switch(key){
		case 'l':{
			_etype=laboder;
			break;
		}
		case 's':{
			_etype = secretary;
			break;
		}	
		case 'm':{
			_etype = manager;
			break;
		}
		case 'a':{
			_etype = accountant;		
			break;
		}
		case 'e':{
			_etype = executive;
			break;
		}
		case 'r':{
			_etype = researcher;		
			break;
		}
	}
}

