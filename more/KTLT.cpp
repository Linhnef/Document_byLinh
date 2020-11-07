// Hello world !!!
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int x,y;
// overloads and templates
	int sum (int a, int b)
	  {
	  return a+b;
	  }

	double sum (double a, double b)
	{
	  return a+b;
	}
	template <class SomeType>
	SomeType sum (SomeType a, SomeType b)
	{
	  return a+b;
	}
	// struct
	struct product {
	  int weight;
	  double price;
	};
	// class
	class Rectangle {
    int width, height;
	public:
    void set_values (int,int);
    int area() {return width*height;}
	}

	void Rectangle::set_values (int x, int y) {
	  width = x;
	  height = y;
	}
	 public:
	Rectangle(int x, int y) : width(x), height(y) {}
	int area(void) { return width * height; };
	
	class CVector {
	  public:
		int x,y;
		CVector () {};
		CVector (int a,int b) : x(a), y(b) {}
		CVector operator + (const CVector&);
	};

	CVector CVector::operator+ (const CVector& param) {
	  CVector temp;
	  temp.x = x + param.x;
	  temp.y = y + param.y;
	  return temp;
	}

int main () {
  Rectangle rect;
  rect.set_values (3,4);
  cout << "area: " << rect.area();
  return 0;
}

// friend
class Rectangle {
    int width, height;
  public:
    Rectangle() {}
    Rectangle (int x, int y) : width(x), height(y) {}
    int area() {return width * height;}
    friend Rectangle duplicate (const Rectangle&);
};

Rectangle duplicate (const Rectangle& param)
{
  Rectangle res;
  res.width = param.width*2;
  res.height = param.height*2;
  return res;
}
// pylomorphism : each OOP can see other function wwith the same name
class Polygon {
  protected:
    int width, height;
  public:
    void set_values (int a, int b)
      { width=a; height=b; }
};

class Rectangle: public Polygon {
  public:
    int area()
      { return width*height; }
};

class Triangle: public Polygon {
  public:
    int area()
      { return width*height/2; }
};
int main()
{
	  cout << "Hello World!"<<endl;
	  // pressed type
	  int i_value1 = 10;
	  int i_value2 = 4;
	  float f_value = (float)(i_value1 / i_value2);
	  // constranst
	  const double pi = 3.1415926;
	  //#define PI 3.14159
      //#define NEWLINE '\n'
	  // IO
	  cout << "Nhap vao x,y : " << endl;
	  cin >> x >> y ;
	  cout << "Gia tri so pi la : " << pi << endl;
	  // operator : + - * / % , == != > < >= <= || !(5 == 5) && 5>3 ? a : b  sizeof()
	  string mystr;
	  cout << "What your name ? "<<endl;
	  getline (cin, mystr);
	  //excute template
	  int i=5, j=6, k;
	  double f=2.0, g=0.5, h;
	  k=sum<int>(i,j);
	  h=sum<double>(f,g);
	  // array
	  myword = { 'B', 'y', 'e', '\0' };
	  //myword[0] = 'B';
	  //myword[1] = 'y';
	  //myword[2] = 'e';
	  //myword[3] = '\0';
	  int foo [5];
	  int foo1 [5] = { 16, 2, 77, 40, 12071 }; 
	  int bar [5] = { 10, 20, 30 }; //0,0
	  int baz [5] = { }; // 5x0 
	  foo[2] = 75;
	  // two-ways
	  int jimmy [3][5];
	  int n,m;
	  for (int n=0; n<3; n++){
		for (int m=0; m<5; m++)
		{
		  jimmy[n][m]=0;
		}
	  }
	  myvar = 25;
	  x = &myvar;
	  y = myvar;
	  // x : address y : value
	  t = *x; // t = *(&myvar); t = 25;
	
	  
	  p1 = &firstvalue; // p1 = address of firstvalue
	  p2 = &secondvalue;// p2 = address of secondvalue
	  *p1 = 10;			// value pointed to by p1 = 10
	  *p2 = *p1;		// value pointed to by p2 = value pointed to by p1
	  p1 = p2;  		// p1 = p2 (value of pointer is copied)
	  *p1 = 20; 		// value pointed to by p1 = 20
	  // firstvalue = 10 , secondvalue = 20
	  // constructor
	  Rectangle rect (3,4);
	  Rectangle rectb (5,6);
	  // ---------------------------read file
		fstream f;                    // object
		f.open("input.txt", ios::in); // open to read if path converse / = //

		string data;                  // tmp
		getline(f, data);             // get data one line
		string allData;
		string line;
		while (!f.eof())          // check end file
		{
		getline(f, line); 		  // read new line to line variable
		allData += line;
		}
		//----------------------------wwrite file
		f.open("output.txt", ios::out); // open to write

		string data = "line 1 in file\n"
					  "line 2 in file\n"
					  "line 3 in file"; //  data
		f << data;                            //  write file

		f.close(); 
	  return 0;
	}