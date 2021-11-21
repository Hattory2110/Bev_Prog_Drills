#include "std_lib_facilities.h"

namespace Calendar{
	class Year {
		static constexpr int min = 1800;
		static constexpr int max = 2200;
	public:
		class Invalid{};		//Year formátum, növelés, operátorokkal való viselkedés
		Year (int x): y{x} { if (x<min || x>max) throw Invalid{}; }
		int year(){ return y; }
		void increment() { y++; }
	private:
		int y;
	};

	Year operator++(Year& year)
	{
		year.increment();
		return 0;
	}

	ostream& operator<< (ostream& os, Year year)
	{
		return os << year.year();
	}

	enum class Month 		//Month formátum, és operátorok
	{ 
		jan, feb, mar, apr, may, june, july, aug, sept, oct, nov, dec
	};

	const vector<string> months = 
	{
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};

	Month operator++(Month& m)
	{
		m = (m==Month::dec) ? Month::jan : Month(int(m)+1);
		return m;
	}

	ostream& operator<<(ostream& os, Month m)
	{
		return os << months[int(m)];
	}

	class Date 		//Dátum összeállítása, constuctors
	{
	public:
		Year year;
		Month month;
		int day;
	
		class Invalid {};
		Date(): year(Year{2001}), month(Month::jan), day(1) {}
		Date(Year y, Month m, int d): year(y), month(m), day(d) { if (!is_valid()) throw Invalid {}; }
		bool is_valid();
		void add_day(int n);
		Year get_year() const { return year; }
		Month get_month() const { return month; }
		int get_day() const { return day; }
	};

	bool Date::is_valid()
	{
		if (day < 1 || day > 31) return false;
		return true;
	}

	void Date::add_day(int n)
	{
		day += n;
		if (day > 31) 
		{
			++month;
			day -= 31;
			if (month == Month::jan)
			{
				++year;
			}
		}
	}

} //Namespace end

ostream& operator<< (ostream& os, Calendar::Date& d) //Dátum beolvasás
{
	return os << d.get_year()
		<< ". " << d.get_month()
		<< ' ' << d.get_day() << ".";
}

istream& operator>> (istream& is, Calendar::Date& dd) // Dátum kiíratás
{
	int y,m,d;
	char ch1, ch2;
	is >> y >> ch1 >> m >> ch2 >> d;
	if (!is) return is;
	if (ch1 != '.' || ch2 != '.')
	{
		is.clear(ios_base::failbit);
		return is;
	}

	dd = Calendar::Date{y,Calendar::Month(m-1),d};
	return is;
}

int main()
try{

	Calendar::Date today (Calendar::Year{1978}, Calendar::Month::june, 25);
	
	
	
	Calendar::Date tomorrow {today.year, today.month, today.day};
	
	cout << "Date: "<< today<< "\n";

	tomorrow.add_day(1);

	cout << "Entered date: " << today << "\n";

    
    return 0;
} catch (Calendar::Year::Invalid){
    cerr<< "Exeption: invalid year.\n";
    return 1;
} catch (Calendar::Date::Invalid){
    cerr<<"Exception: Invalid date.\n";
    return 2;
} catch(exception& e){
    cerr<< e.what() <<"\n";
    return 3;
} catch(...){
    cerr<<"Some error.\n";
    return 4;
}
