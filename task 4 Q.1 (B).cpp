#include<iostream>
using namespace std;
int main()
{
	int cost =1200;
	int discount =cost*0.25;
	int afterdiscount= cost-discount;
	int servicescharges= afterdiscount*8/100;
	int afterservices= servicescharges+afterdiscount;
	int finalprice= afterservices+50;
	cout<<" final ticket cost ="<<finalprice<<endl;
	return 0;
}