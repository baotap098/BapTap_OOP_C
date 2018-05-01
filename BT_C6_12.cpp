#include<iostream>
#include"Fraction.h"
using namespace std;
class TableMul{
	private:
	int denominator;
	public:
		TableMul(){denominator=1};
		TableMul(int denominator){this->denominator = denominator;};
		void set(int denominator)
		{
			this->denominator = denominator;
		}
		void DisplayTableMul()
		{
			Fraction **f = new Fraction*[denominator];
			for(int i = 1; i<denominator; ++i)
			{
				f[i] = new Fraction[denominator];
				f[i][0].setNumerator(i);
				f[i][0].setDenominator(denominator);
				f[i][0].lowterms();
			}

			for(int i = 1; i < denominator;++i)
			{
				f[i][0].display();
				cout<<"\t";
				for(int j = 1; j< denominator;++j)
				{
					f[i][j] = f[i][0].fmul(f[j][0]);
					f[i][j].lowterms();
					f[i][j].display();
					cout<<"\t";
				}
				cout<<endl;
			}
			delete []f;
		}
};
void DisplayTableMul(int denominator);
int main()
{
	TableMul t;
	int den;
	cout<<"Enter your denominator:";
	cin>>den;
	t.set(den);
	t.DisplayTableMul();
	system("pause");
	return 0;
}

