#include<string>
#include<iostream>
using namespace std;
class Car
{
	// class members
	public:
	std::string color;
	std::string engine;
	// member functions
	void start();
	void stop();
	void move();
};

int main()
{
	Car aspire;
	aspire.color = "red";
	aspire.engine = "1.5L";
	cout << "The color is " << aspire.color << endl;
	cout << "The Engine Capacity is " << aspire.engine << endl;
	return 0;
}