#include<iostream>
using namespace std;
int main()
{
	int purchaseamount = 6000;
	bool membershipcard = false;
	cout<<((purchaseamount>5000 || membershipcard)?"discount applied":" no discount");
	return 0;
	}