#include <iostream>
#include <math.h>

using namespace std;

void findDistance();
void grades();
void enchanted_grades();
void money_distributor();
void leap_year();
void salary_calc();

int main(){
	int menu=-1;
	while(menu!=0){	
		cout<<"\nGormek istediginiz sorunun başındaki numarayı girin:\n1-Exercise 6.1\n2-Exercise 6.2\n3-Exercise 6.3\n4-Exercise 6.4\n5-Exercise 6.5\n6-Exercise 6.6\n0-Cıkıs\nSecim:";
		cin>>menu;
		switch(menu){
			case 0:
				break;
			case 1:
				findDistance();
				break;
			case 2:
				grades();
				break;
			case 3:
				enchanted_grades();
				break;
			case 4:
				money_distributor();
				break;
			case 5:
				leap_year();
				break;
			case 6:
				salary_calc();
				break;
			default:
				cout<<"tekrar deneyin";	
		}
	}
	return 0;
}

void findDistance(){
	/*Write a program to find the square of the distance between two points. Find the
distance only if you want to do the independent research needed to perform a square root in
C++.*/
	int c1x,c1y,c2x,c2y,dist;
	cout<<"Enter the coordinates of first point: ";
	cin>>c1x>>c1y;
	cout<<"Enter the coordinates of second point: ";
	cin>>c2x>>c2y;

	dist=(c2x-c1x)*(c2x-c1x)+(c2y-c1y)*(c2y-c1y);
	dist=sqrt(dist);

	cout<<"Distance between points is "<<dist;
}

void grades(){
	//Given a numeric grade, print the letter.

	int grade;
	cout<<"Grade: ";
	cin>>grade;
	if(grade<=0){
		cout<<"geçersiz not";
	}else if(grade<=60){
		cout<<"F";
	}else if(grade<=70){
		cout<<"D";
	}else if(grade<=80){
		cout<<"C";
	}else if(grade<=90){
		cout<<"B";
	}else if(grade<=100){
		cout<<"A";
	}else{
		cout<<"geçersiz not";
	}
}

void enchanted_grades(){
	int grade;
	cout<<"Grade: ";
	cin>>grade;

	if(grade%10<=3){
		if(grade<=0){
			cout<<"geçersiz not";
		}else if(grade<=60){
			cout<<"F-";
		}else if(grade<=70){
			cout<<"D-";
		}else if(grade<=80){
			cout<<"C-";
		}else if(grade<=90){
			cout<<"B-";
		}else if(grade<=100){
			cout<<"A-";
		}else{
			cout<<"geçersiz not";
		}
	}else if(grade%10<=7){
		if(grade<=0){
			cout<<"geçersiz not";
		}else if(grade<=60){
			cout<<"F";
		}else if(grade<=70){
			cout<<"D";
		}else if(grade<=80){
			cout<<"C";
		}else if(grade<=90){
			cout<<"B";
		}else if(grade<=100){
			cout<<"A";
		}else{
			cout<<"geçersiz not";
		}
	}else{
		if(grade<=0){
			cout<<"geçersiz not";
		}else if(grade<=60){
			cout<<"F+";
		}else if(grade<=70){
			cout<<"D+";
		}else if(grade<=80){
			cout<<"C+";
		}else if(grade<=90){
			cout<<"B+";
		}else if(grade<=100){
			cout<<"A+";
		}else{
			cout<<"geçersiz not";
		}
	}
}

void money_distributor(){	
	double money;
	int moneyint;
	
	do{
		cout<<"Money(less than 1.00): ";
		cin>>money;
	}while(money>=1 && money<0);

	moneyint=(int)(money*100);

	cout<<moneyint/25<<" quarters\n";
	moneyint%=25;
	cout<<moneyint/10<<" dimes\n";
	moneyint%=10;
	cout<<moneyint/5<<" nickels\n";
	moneyint%=5;
	cout<<moneyint<<" pennies\n";
}

void leap_year(){
	int year;
	cout<<"Year: ";
	cin>>year;
	if(year%4==0){
		if(year%100==0 && year%400!=0){
			cout<<year<<" is leap year";
		}else{
			cout<<"Not leap year";
		}
	}else{
		cout<<"Not Leap year";
	}
}

void salary_calc(){
	int work_hour,hourly_wage;

	cout<<"Work Hour: ";
	cin>>work_hour;
	cout<<"hourly wage:";
	cin>>hourly_wage;

	if(work_hour<=40 && work_hour>=0){
		cout<<work_hour*hourly_wage/2;
	}else if(work_hour>40){
		cout<<work_hour*hourly_wage;
	}
}

