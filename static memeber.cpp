#include<iostream>
using namespace std;

class Alpha
{
	private:
		int a;
		int b;
	public:
      Alpha()    
        {
        	a=5;
        	b=5;
        	stat++;
        }
        static int stat;  //define
};
int Alpha ::stat=0;   //declare
int main()
{
	Alpha a1;
	Alpha a2;
	Alpha a3;   //every time constructor call as object create and inc the value of stat.
	cout<<"value using a1 object "<<a1.stat<<endl;
	cout<<"value using a2 object "<<a2.stat<<endl;
	cout<<"value using a1 class name "<<Alpha::stat;
}
