#include<iostream>
using namespace std;
class Int{
	private:
		int value;
	public:
		//Int(){value = 0;}
		Int():value(0){}
		Int(int n){value = n;}
		int get(){	return value;}
		void set(int n){ value = n;}
		void show();
		
		void add_Int(Int,Int);
};
int main(){
	Int a(5),
		b(68);
	Int c;
	c.add_Int(a,b);
	c.show();
	a.show();
	b.show();
	return 0;
}
void Int::show(){
	cout<<value<<endl;
}
void Int::add_Int(Int a,Int b){
	value = a.get()+b.get();
}
