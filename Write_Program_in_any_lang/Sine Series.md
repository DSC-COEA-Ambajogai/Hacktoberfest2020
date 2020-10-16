#include<iostream>
#include<cmath>
using namespace std;

class SINX{
	int x,N;
	
	public:
		SINX(int y, int M);
		void Evaluate();	
};

SINX::SINX(int y, int M)
{
	x=y;
	N=M;
}
void SINX::Evaluate()
{
	float sum=0;
	int c,d=1;

	if(x>5 && x<10 && N>15 && N<20)
	{
		float X=(3.14159*x)/180 ;
		for(int i=1;i<=(N*2);i=i+2)
		{
			c=1;
			for(int j=1;j<=i;j++)
			{
					c=c*j;
			}			
			if(d%2!=0)
			{
				sum = sum + ((pow(X,i))/c);
			}
			else
			{
				sum = sum - ((pow(X,i))/c);
			}
			d++;
		}
	}
	cout<<"The value for the given sine series is "<<sum;
}
int main()
{
	int x,N;
	cout<<"Enter the value of x\n";
	cin>>x;
	cout<<"Enter the value of N\n";
	cin>>N;
	SINX sin(x,N);
	sin.Evaluate();
	return 0;
}
