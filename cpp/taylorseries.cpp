#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
using namespace std;

int deg; //degrees variable
const double pi = 3.1415;
double fact (int f); //factorial function
double power(double x, int y); //power function
double sine(double x); //sine series
double cosine(double x); //cosine series


int main()
{
  char zzz;
  double x= 0.0;
  const double pi = 3.1415;
   int deg=x*(180)/pi; //conversion factor
  cout << endl << " Degrees" << "    Sine"<<"            Cosine"<<endl;
  	 cout << endl << "   " << 0 << "           "<< sine(0)<<"              "<< cosine(0); //display sin and cos of 0
    while (x < 0.7853) //radian equivalent of 45 degrees
    {
   x = x + 0.0872664626; //radians equivalent of 5 degree increments
   deg=x*(180/pi);//conversion to degrees
      cout << endl << "   " << deg << "      "<< sine(x)<<"        "<< cosine(x);
    }
  cout << endl;
cout << "Enter a character to end.\n";
cin >> zzz;
}

 //Function for Factorial
    double fact(int x)
    {
    double f=1.0;
    for (int i=1; i<=x; i++)
    {
    f=f*i;
    }
    return f;
    }

    //Function for Power
    double power (double x, int y)
    {
    double p=1.0;
    for (int i=1; i<=y; i++)
    p=p*x;
    return p;
    }

    //Sine Series
    double sine (double x)
    {
    double sum_positive = 0.0;
    double sum_negative= 0.0;
    double output = 0.0;
	const double pi = 3.1415;
    for (int i=1; i<=1000; i+=4)
    {
    sum_positive = sum_positive + (power (x,i) / fact (i));
    }
    for (int i=3; i<=1000; i+=4)
    {
    sum_negative = sum_negative + (power (x,i) / fact (i));
    }
	   output = (sum_positive - sum_negative);
    return output;
	return deg=x*(180)/pi;
	}

	//Cosine Series
    double cosine (double x)
    {
    double sum_positive = 0.0;
    double sum_negative= 0.0;
    double output=0.0;
	const double pi = 3.1415;
    for (int i=4; i<=1000; i+=4)
    {
sum_positive = sum_positive + (power (x,i) / fact (i));
    }
    for (int i=2; i<=1000; i+=4)
    {
sum_negative = sum_negative + (power (x,i) / fact (i));
    }
	output = (1 - (sum_negative) + (sum_positive));
    return output;
	return deg=x*(180)/pi;
	}
