#include "std_lib_facilities.h"

class Point //Point classs
{
	double p1, p2;
public:
	class Invalid{};
	Point(): p1(0), p2(0) {};	//Default constructor
	Point(double x, double y): p1(x), p2(y) {if (!is_valid()) throw Invalid{};}; //constructor
	//void init(Point& p, double x, double y);		//other consrtuctor
	bool is_valid();
	double get_p1() const {return p1;} //get_values
	double get_p2() const {return p2;}
};
/*
void Point::init(Point& p, double x, double y)
{
	if (!is_valid()){
		throw Invalid{};
	} else
	{
		p.p1=x;
		p.p2=y;
	}
		
}*/


//Declarations
vector<Point> original_points;
vector <Point> processed_points;


bool Point::is_valid()
{
	if (isdigit(p1) && isdigit(p2)) return false;
	return true;
}

ostream& operator<< (ostream& os, Point& p) //Point write
{
	return os << p.get_p1() << p.get_p2();
}


istream& operator>> (istream& is, Point& p)
{
	double x, y;
	char ch;
	
	is >> x >> ch >> y;
	if (!is) return is;
	if (ch != ',')
	{
		is.clear(ios_base::failbit);	
		return is;
	}
	p=Point{x,y};
	return is;
}

void compare(int i)
{
	double h1=original_points[i].get_p1();
	double h2=original_points[i].get_p2();
	double j1=processed_points[i].get_p1();
	double j2=processed_points[i].get_p2();
	if(h1==j1 && h2==j2)
	{
		cout<< h1 <<","<<h2<<"\n";
	}else
	{
		cout<<"Something's wrong in the values!\n";
	}
}

int main()
try {

	cout<<"Please enter 7 Point values (xx,xx): \n";
	
	Point q;
	
	for(int i=0; i<7; i++)
	{
		cin>> q;
		original_points.push_back(Point{q.get_p1(), q.get_p2()});
	
	}
		
	//cout << "Please enter name of output file: ";
	string ofname="mydata.txt";
	//cin >> ofname;
	ofstream ofile {ofname};
	if (!ofile) error("Can't open ",ofname);
	
	for(const auto& val : original_points)
		ofile<<val.get_p1()<<","<<val.get_p2() <<"\n";
	
	ofile.close();
	
	//cout << "Please enter input file name: ";
	string ifname="mydata.txt";
	//cin >> ifname;
	ifstream ifile {ifname};
	if (!ifile) error("Can't open ifile ",ifname);
	
	Point r;
	
	while(ifile >> r)
		processed_points.push_back(Point{r.get_p1(), r.get_p2()});
		
	ifile.close();
	
	if(original_points.size()!=processed_points.size())
	{
		cout<<"Something's wrong!\n";
		return 3;
	}
	
	int length=original_points.size()-i;
	
	cout<<"Values of the vectors:\n"
	for(int length=0; length<7; length++)
		
	{
		compare(length);	
	}
	
	
	return 0;
} catch(exception& e){			//Error handling
	cerr<< e.what()<<"\n";
	return 1;
} catch(Point::Invalid){
	cerr<<"Invalid Point value given.\n";
	return 2;
}/*catch(runtime_error& e){
	cerr<<"Error: "<< e.what()<< "\n";
	return 3;
}*/
