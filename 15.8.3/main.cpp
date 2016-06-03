#include <iostream>
#include "Basket.h"
#include "Sales_item.h"


int main()
{
	Basket basket;
	Sales_item item1(Bulk_item("0-0001-0001-1", 99, 20, 0.5));
	Sales_item item2(Bulk_item("0-0001-0001-2", 50));
	Sales_item item3(Bulk_item("0-0001-0001-3", 59, 200, 0.3));
	Sales_item item4(Bulk_item("0-0001-0001-1", 99, 20, 0.2));

	basket.add_item(item1);
	basket.add_item(item2);
	basket.add_item(item3);
	basket.add_item(item4);

	cout << basket.total() << endl;
	system("pause");
	return 0;
}