///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:
// Student No:
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

// ***** QUESTION 3 ******
// Question 3 has 3 parts
// 3.1 Using the MINIMAL "Fraction" class provided, overload the greater than operator to work with
//     objects of class Fraction as a NON-MEMBER FUNCTION.   You may modify the Fraction class to 
//     demonstrate friendship.  DO NOT USE FLOATING POINT MATH!!!
// 3.2 Overload two functions called "add" which take two arguements, an integer and a fraction (in 
//     either order) and return a fraction.  
// 3.3 create a driver program to test your overloaded > operators and your overloaded 

class Fraction {

public:
	Fraction(int n, int d) : num(n), denom(d) { };
	void print() { cout << num << "/" << denom; };
	friend bool  operator > (Fraction& , Fraction& );
	friend Fraction operator+(Fraction& , int );
	friend Fraction operator+(int , Fraction& );
	int num;				
	int denom;

};

bool  operator > (Fraction& f1, Fraction& f2){
		int frac1;
	 	int frac2;
	 	frac1 = f1.num / f1.denom;
	 	frac2 = f2.num / f2.denom;

		return frac1 > frac2;
}

Fraction  operator+(Fraction  &f, int a){
	Fraction result(0, 0);
	result.denom = f.denom;
	result.num = f.num + a*f.denom;
	return result;
}


Fraction operator + (int a, Fraction& f){
	Fraction result(0, 0);
	result.denom = f.denom;
	result.num = f.num + a*f.denom;
	return result;
}

int main(){
	
	int num = 2;
	Fraction frac1(8, 9);
	Fraction frac2(4, 2);
	Fraction frac3(0, 0);
	Fraction frac4(0, 0);
	
	if (frac1 > frac2)
	{
		cout << "fraction 1 is greater than fraction 2" << endl;
	}
	else
	{
		cout << "fraction 2 is greater than fraction 1" << endl;
	}

	frac3 = frac1 + num;
	frac4 = num + frac1;
	
	cout << " Fraction 3: " << frac3.num << "/" << frac3.denom << endl;
	cout << " Fraction 4: " << frac3.num << "/" << frac3.denom << endl;
	return 0;
}


