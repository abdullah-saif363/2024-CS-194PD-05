#include <iostream>
using namespace std;
float taxcalculator(char vehicle,int price);
main()
{
char vehicle;
int price;
float finalamount;	
	cout<<"Enter the vehicle type(M,E,S,T,V):  ";
	cin>>vehicle;
	cout<<"Enter the price of the vehicle:	";
	cin>>price;
	finalamount = 	taxcalculator( vehicle, price);
	cout<<"The final price of vehicle "<<vehicle<<"after adding the tax is  $"<<finalamount;

}
float taxcalculator(char vehicle,int price)
{
float Taxamount,finalprice;
	if (vehicle == 'M')
	{		
	Taxamount= price*6/(100);
	finalprice = price + Taxamount;	
	}
	if (vehicle == 'E')
	{		
	Taxamount= price*8/(100);
	finalprice = price + Taxamount;	
	}
	if (vehicle == 'S')
	{		
	Taxamount= price*10/(100);
	finalprice = price + Taxamount;	
	}
	if (vehicle == 'V')
	{		
	Taxamount= price*12/(100);
	finalprice = price + Taxamount;	
	}
	if (vehicle == 'T')
	{		
	Taxamount= price*15/(100);
	finalprice = price + Taxamount;	
	}
           
	return finalprice;

}