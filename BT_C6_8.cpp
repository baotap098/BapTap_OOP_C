#include<iostream>
using namespace std;
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
int main(){
	OBJECT o1,o2,o3;
	o1.answer();
	o2.answer();
	o3.answer();
	system("pause");
	return 0;
}
void OBJECT::answer(){
	cout<<"I am object number "<<serial<<endl;
}
unsigned int OBJECT::count = 0;
