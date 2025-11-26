#include <iostream>
using namespace std;
int main()
{
	string name, deparment;
	int rollNo;
	float english, math, physics, total, percentage;
	cout <<"enter student name: ";
	cin >> name;
	cout <<"enter rollNo: ";
	cin >>rollNo;
	cout <<"enter derparment: ";
	cin>> deparment;
	cout <<"enter marks in english: ";
	cin >> english;
	cout <<"enter marks in math: ";
	cin >> math;
	cout <<"enter marks in physics: ";
	cin >> physics;
	total = english + math + physics;
	percentage=(total /300)* 100;
	cout<<"=========================================\n";
	cout<<"\tSTUDENT RESULT CARD\n";
	cout<<"=========================================\n";
	cout<< "Name:\t\t" <<name<<endl;
	cout<< "rollNo:\t\t" <<rollNo<<endl;
	cout<< "deparment:\t" <<deparment<<endl;
	cout<<"------------------------------------------\n";
	cout<< "total marks:\t" << total << "/300\n";
	cout<< "percentage:\t" << percentage << "%\n";
	cout<< "Grade:\t\tA+\n";
	cout<<"=========================================\n";
	cout<< "congratulations " << name << "!\n";
	cout<<"=========================================\n";
	return 0;	
}