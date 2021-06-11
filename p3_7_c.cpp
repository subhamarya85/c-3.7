#include<iostream>
#include<cmath>



using namespace std;


double fact(int x)
{
	int res = 1 ;

	for (int i = 1 ; i <= x ; ++i)
	{
		res = res * i ;

	}

	return res ;
}



void calc( float rad , float *res )
{
	int n = 1 , sign = -1 ;


	
	for ( double i = 2 ; n <= 10 ; i = i + 2 )
	{

		*res =  *res +  sign * (pow(rad , i )  /double (fact(i)) );

		++n;

		sign = sign * -1 ;




	}
	*res = 1 + *res ;
}


int main()
{



	int x ;
	 cout << "Enter x " ;
	cin >> x ;

	float radian , result = 0;


	radian = x * ( 3.1459 / 180.0 ) ;

	calc( radian , &result) ;

	cout << "cos " << x << " = " << result ;

	return 0 ;


}
