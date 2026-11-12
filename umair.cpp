#include<iostream>
using namespace std;
int main()
{
	int item, quantity, cashgiven;
		int orderamount=0;
		double discount = 0.0;
		double servicecharge;
			double total=0.0;
			double retern;
			
	char ctype, otype;
	cout << "Ucp cafeteria menu\n";
	cout << "1. Burger - Rs. 350\n2. Pizza Slice - Rs. 280\n3. Chicken Roll - Rs. 220\n4. Cold Drink - Rs. 100 \n";
	cout << "Enter item no= ";
	cin >> item;
	cout << "Enter quantity= ";
	cin >> quantity;
	cout << "Enter customer type (S = Student, F = Faculty, G = Guest)= ";
	cin >> ctype;
	cout << "Enter order type (1 = Dine-in, 2 = Takeaway)= ";
	cin >> otype;
	cout << "Enter cash given= ";
	cin >> cashgiven;

	switch (item)
	{
	case 1:
		cout << "Burger";
		orderamount = 350 * quantity;
			break;
	case 2:
		cout << "pizza slice";
		orderamount = 280 * quantity;
		break;
	case 3:
		cout << "chicken roll";
		orderamount = 220 * quantity;
		break;
	case 4:
		cout << "colddrink";
		orderamount = 100 * quantity;
		break;
	default:
		cout << "invalid entery";
		break;

	}
	switch(ctype)
	{
	case 'S':
	case 's':
		if(orderamount<500)
		{
			discount = (orderamount * 5) / 100;
			total = orderamount - discount;
			cout << "\nDiscount5%= " << discount;
		}

		else if (orderamount >= 500 && orderamount < 1000)
		{
			discount = (orderamount * 10) / 100;
			total = orderamount - discount;
			cout << "\nDiscount10%= " << discount;
		}
		else if (orderamount >= 100)
		{
			discount = (orderamount * 15) / 100;
			total = orderamount - discount;
			cout << "\nDiscount15%= " << discount;
		}
		else
			cout << "No discount";




		break;
	case 'F':
	case 'f':
		if (orderamount <= 1000)
		{
			discount = (orderamount * 10) / 100;
			total = orderamount - discount;
			cout << "\nDiscount10%= " << discount;
		}
		else if (orderamount >= 1000)
		{
			discount = (orderamount * 20) / 100;
			total = orderamount - discount;
			cout << "\nDiscount20%= " << discount;
		}
		break;
	case 'G':
	case 'g':
		if (orderamount >= 1000)
		{
			discount = (orderamount * 20) / 100;
			total = orderamount - discount;
			cout << "\nDiscount20%= " << discount;
		}
		else
			cout << "0%discount";
		break;


	   }
	

	switch (otype)
	{
	case'1':
		servicecharge = (total * 5) / 100;
		total = total + servicecharge;
		cout << "\nService charge 5%= " << servicecharge;
		cout << "\ntotal bill= " << total;
		break;
	case'2':
		total = total + 30;
		cout << "\ntotal bill= " << total;
		break;
	default:
		cout << "Warning and order is takeaway!!!!!!!!";


	}
	if (total < cashgiven)
	{
		retern = cashgiven - total;
		cout << "\nReturn= " << retern;
	}
	else if (total == cashgiven)
	{

		cout << "no return of cash";
	}
	else
	{
		cout << "\nDont have enough cash!!!";
	}




	return 0;
}