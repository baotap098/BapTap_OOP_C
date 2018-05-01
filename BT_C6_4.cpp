#include<iostream>
using namespace std;
class employee{
	private:
		int numberEmployee;
		float compensation;
	public:
		employee(){numberEmployee = 0; compensation = 0.0f;};
		~employee(){};
		int getNum(){
			return numberEmployee;
		}
		float getCom(){
			return compensation;
		}
		void setNum(int num){
			this->numberEmployee = num;
		}
		void setCom(int com){
			this->compensation = com;
		}
		void display();
};
int main(){
	employee e[3];
	int numberEmployee = 0;
	float compensation = 0;
	for(int i = 0;i<3;++i)
	{
		cout<<"Enter NUMBER EMPLOYEE ["<<i<<"]: ";
		cin>>numberEmployee;
		e[i].setNum(numberEmployee);
		cout<<"Enter COMPENSATION ["<<i<<"]: ";
		cin>>compensation;
		e[i].setCom(compensation);
		cout<<endl;
	}
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
	cout<<endl;
}


