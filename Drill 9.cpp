#include "std_lib_facilities.h"

struct Date
{
	int year;//year
	int month;//month in year
	int day;//day of month
};



/*Help function*/
void init_day(Date& dd,int month,int day,int year)
{
	/*if ((year % 4 == 0) && (year % 100 == 0) || (year % 400 == 0))   */
	//Determine if the year is a leap year
		
	

	if (month < 1 || month>12)
		error("invalid data");
	if (day < 1 || day>31)
		error("invalid data");
	Date dd;
	dd.year = year;
	dd.month = month;
	dd.day = day;

		
	//check that(year,month,day)is a valid date
//if it is,use it to initialize dd
}

void add_day(Date& dd,int n)
{
	dd.day += n;
	while (dd.day <= 32)
	{
		if (dd.day == 32)
			dd.day -= 31, dd.month += 1;
		while (dd.month <= 13)
			if (dd.month == 13)
				dd.month -= 12, dd.year += 1;
		
	}
//increase dd by n days
}

ostream& operator<<(ostream& out, const Date& dd)
{
	return out << dd.day << '-' << dd.month << '-' << dd.year;

}

int main()
{
	Date today;
	init_day(today, 6, 25, 1978);
	Date tomorrow = today;
	add_day(tomorrow, 1);
	cout << today << endl << tomorrow << endl;
	return 0;

}
