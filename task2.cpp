#include <iostream>
using namespace std;
float volume(float length,float height,float width,string unit);
main()
{
float length,height,width,result;
string unit;
cout<<"Enter the length of the pyraid(in m): ";
cin>>length;
cout<<"Enter the width of the pyramid(in m): ";
cin>>width;
cout<<"Enter the height of the pyramid(in m): ";
cin>>height;
cout<<"Enter the desired output unit(mm,cm,m,km): ";
cin>>unit;
result = volume( length, height, width, unit);
cout<<result<<unit; 


}
float volume(float length,float height,float width,string unit)
{
         float volume,total_volume ;
	volume = (1/3)*h(length*width);
	if (unit ==  "milimeters" )
{
	total_volume = volume*1000;
}
	if (unit ==  "centimeters" )
{
	total_volume = volume*100;
}
	if (unit ==  "kilometers" )
{
	total_volume = volume/1000;
}
	if (unit ==  "meters ")
{
	total_volume = volume ;
}
	return total_volume;
}



