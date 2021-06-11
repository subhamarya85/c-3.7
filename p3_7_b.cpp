#include<iostream>



using namespace std;


float pow(float x , int y )
{
	float res ;
	for(int i = 0 ; i < y ; ++i)
	{
		x = x * x ;
	}

	return(x);

}

void cal(int n)
{

	float sum = 0 ;

	for(float i = 1.0 ; i <= n ; ++i)
	{

		sum = sum + (pow((1/i) , i ) ) ;

		cout << (pow((1/i) , i )) << endl ;
	}

	cout << " SUM = " << sum ;
}


int main()
{
	int n;

	cout << "Enter the value of nth term " << endl ;
	cin >> n ;



	cal(n);

	return 0;
}
