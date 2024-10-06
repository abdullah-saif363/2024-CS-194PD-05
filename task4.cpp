#include <iostream>
using namespace std;
string projectTimeCalculator(int hours,int days,int number);
main()
{
int hours,days,number;
string result;
cout<<"Enter the neede hours: ";
cin>>hours;
cout<<"Enter the days that the firm has: ";
cin>>days;
cout<<"Enter the number of workers:  ";
cin>>number;
result = projectTimeCalculator( hours, days, number);
cout<<result;

}
string projectTimeCalculator(int hours,int days,int number)
{
float firmhours,traninghours,remaininghours;
string answer;
traninghours=  (days * 0.1)*number;
remaininghours = days*10*(0.9)*number;
if (remaininghours >= hours)
{
    answer =  "Yes!" + to_string(remaininghours - hours) + "hours left. " ;
}
if (remaininghours < hours)
{
    answer =  "Not Enought time! " + to_string( hours - remaininghours) + "hours needed" ;
}

return answer;
}
