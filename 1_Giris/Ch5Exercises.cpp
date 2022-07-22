#include <iostream>

using namespace std;
const double pi=3.141592;

void CeltoF();
void SphereVolume();
void km_to_mile();
void PerimeterofRect();
void hours_to_minute();
void minutes_to_hour();

int main(){
	int menu=-1;
	while(menu!=0){	
		cout<<"\nGormek istediginiz sorunun başındaki numarayı girin:\n1-Exercise 5.1\n2-Exercise 5.2\n3-Exercise 5.3\n4-Exercise 5.4\n5-Exercise 5.5\n6-Exercise 5.6\n0-Cıkıs\nSecim:";
		cin>>menu;
		switch(menu){
			case 0:
				break;
			case 1:
				CeltoF();
				break;
			case 2:
				SphereVolume();
				break;
			case 3:
				PerimeterofRect();
				break;
			case 4:
				km_to_mile();
				break;
			case 5:
				hours_to_minute();
				break;
			case 6:
				minutes_to_hour();
				break;
			default:
				cout<<"tekrar deneyin";
		}
	}
	return 0;
}

void CeltoF(){
	/*Question: Write a program that converts Celsius to Fahrenheit.*/
	float cel;
	cout<<"Please enter the celcius value: ";
	cin>>cel;
	cout<<"The Fahrenheit equal of "<<cel<<" celcius is "<<(cel*9/5)+32;
}

void SphereVolume(){
	/*Question: Write a program to calculate the volume of a sphere, 4/3πr3.*/
	double r;
	cout<<"radius of Sphere: ";
	cin>>r;
	cout<<"Volume of sphere is "<<4*pi*(r*r*r)/3;
}

void PerimeterofRect(){
	/*Question: Write a program to print out the perimeter of a rectangle given its height and
	width.*/
	int h,w;
	cout<<"enter height and width of rectangle:";
	cin>>h>>w;
	cout<<2*(h+w);
}

void km_to_mile(){
	/*Question: Write a program that converts kilometers per hour to miles per hour.*/
	double dist;
	cout<<"Enter distance(km): ";
	cin>>dist;
	cout<<dist<<"km = "<<dist*0.6213712<<"mile";
}

void hours_to_minute(){
	/*Question: Write a program that takes hours and minutes as input and outputs the total
number of minutes ( 1 hour 30 minutes = 90 minutes).*/
	int hr,min;
	cout<<"enter hours and minutes(Ör-> 1:30):";
	cin>>hr;
	cin.get();
	cin>>min;
	cout<<hr*60+min<<" minutes";
}

void minutes_to_hour(){
	/*Question: Write a program that takes an integer as the number of minutes and outputs the
total hours and minutes (90 minutes = 1 hour 30 minutes).*/
	int min;
	cout<<"enter minutes: ";
	cin>>min;
	cout<<min/60<<" hours "<<min%60<< " minutes";
}