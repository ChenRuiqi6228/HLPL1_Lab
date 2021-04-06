#include "std_lib_facilities.h"

void swap_v(int a, int b)
{
	int temp;
	temp = a, a = b;
	b = temp;
}


void swap_r(int& a, int& b)
{
	int temp;
	temp = a, a = b;
	b = temp;
}


/*
* error:Expression must be modifiable left value so it cant work
void swap_cr(const int& a, const int& b)
{
	int temp;
	temp = a, a = b;
	b = temp;
}
*/









int main()
{
	int x = 7;
	int y = 9;
	swap_r(x, y);//  this call compiled they were not actucally swapped.
	swap_v(7, 9);//  this call compiled they were not actucally swapped.
	const int cx = 7;
	const int cy = 9;
	swap_r(cx, cy);//  this call compiled they were not actucally swapped.
	swap_v(7.7, 9.9);//  this call compiled they were not actucally swapped.
	double dx = 7.7;
	double dy = 9.9;
	swap_v(dx, dy);//  this call compiled they were not actucally swapped.
	swap_r(dx, dy);//  this call compiled they were not actucally swapped.
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "cx = " << cx << endl;
	cout << "cy = " << cy << endl;
	cout << "dx = " << dx << endl;
	cout << "dy = " << dy << endl;
	return 0;




}
