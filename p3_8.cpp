#include<iostream>
#include<cmath>

using namespace std;





double fact( int num )
{
	int count ; 
	double sum = 1 ;

	for( int i = 1 ; i <= num ; ++i)
	{
		sum = sum * i ;


	}
	return sum ;
}


void calc( float rad , float *res)
{
	int n = 1 , sign = 1;

	for( double i = 1; (n <= 10) ;i = i + 2 )
	{

		*res = *res + sign * (pow(rad , i ) / fact(i));
		++n;
		sign = sign * -1 ;


	}
}


int main()
{
	int x ;

	float radian , result = 0 ;

	cout << "Enter x ";
	cin >> x ;


	radian = x * (3.14159 / 180.0 );


	calc( radian , &result ) ;

	cout << "sin " << x << " = " << result ;



	

}
