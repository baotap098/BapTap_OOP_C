#include<iostream>
using namespace std;
class TIME {
	private:
		unsigned int hours;
		unsigned int minutes;
		unsigned int seconds;
	public:
		TIME(){hours = minutes = seconds = 0;}
		TIME(int hours, int minutes, int seconds){this->hours= hours; this->minutes=minutes; this->seconds = seconds;}
		~TIME(){}
		const void display();
		TIME operator+(TIME) const;
		void add(TIME,TIME); 
};
int main(){
  	const TIME t1(2,50,0),t2(13,1,60);
  	TIME t;
//	t.add(t1,t2);
	t = t1+t2;
	t.display();
	system("pause");
	return 0 ;
}
const void TIME::display(){
	cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
}
void TIME::add(TIME t1,TIME t2){
		seconds = (t1.seconds+t2.seconds)%60;
		minutes = (t1.seconds+t2.seconds)/60 + (t1.minutes + t2.minutes)%60; 
		hours = (t1.minutes+t2.minutes)/60 + (t1.hours+t2.hours)%12;
}
TIME TIME::operator+(TIME t2) const
{
        int sec, min, hr;
            sec = (seconds+t2.seconds)%60;
			min = (seconds+t2.seconds)/60 + (minutes + t2.minutes)%60;
			hr = (minutes+t2.minutes)/60 + (hours+t2.hours)%12;
            return TIME(hr, min, sec);
}

