#include <iostream>

using namespace std;
void printName();
void printingE();
void area();
void printHugeHello();

int main(){
	int menu=-1;
	while(menu!=0){	
		cout<<"Gormek istediginiz sorunun başındaki numarayı girin:\n1-Exercise 4.1\n2-Exercise 4.2\n3-Exercise 4.3\n3-Exercise 4.3\n0-Cıkıs\nSecim:";
		cin>>menu;
		switch(menu){
			case 0:
				break;
			case 1:
				printName();
				break;
			case 2:
				printingE();
				break;
			case 3:
				area();
				break;
			case 4:
				printHugeHello();
				break;
			default:
				cout<<"tekrar deneyin";
		}
	}
}

void printName(){
	string name;
	int day,month,year;
	cout<<"Question: Write a program to print your name, and date of birth.\n";
	cout<<"Your name: ";
	cin>>name;
	cout<<"Enter your birth date as dd/mm/yyyy:";

	cin>>day;
	cin.get();
	cin>>month;
	cin.get();
	cin>>year;


	cout<<"Hello "<<name<<"Your date of birth is "<<day<<"/"<<month<<"/"<<year;
}

void printingE(){
	cout<<"Question: Write a program to print your name, and date of birth.\n";
	cout<<"*****\n*\n*\n*****\n*\n*\n*****";
}

void area(){
	cout<<"Question: Write a program to compute the area and circumference of a rectangle 3 inches wide by 5 inches long. What changes must be made to the program so it works for a rectangle 6.8 inches wide by 2.3 inches long?";
	int h,w;
	cout<<"enter height and width of rectangle:";
	cin>>h;
	cin>>w;

	cout<<"circumference: "<<(h+w)*2<<"\nArea: "<<h*w;


}

void printHugeHello(){
	cout<<"Question: Write a program to print \"HELLO\" in big block letters where each letter is 7"
    <<"characters high and 5 characters wide.";//you can se escape character example here too

	cout<<"\n\n*   * ***** *     *     *****"<<endl
			<<"*   * *     *     *     *   *"<<endl	
			<<"*   * *     *     *     *   *"<<endl
			<<"***** ***** *     *     *   *"<<endl
			<<"*   * *     *     *     *   *"<<endl
			<<"*   * *     *     *     *   *"<<endl
			<<"*   * ***** ***** ***** *****"<<endl;


}
