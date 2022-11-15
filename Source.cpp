#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
double powerA3(double a) {
	double res = a * a * a;
	return res;
}
double powerA2(double a) {
	double res = a * a;
	return res;
}
double powerA4(double a) {
	double res = a * a * a * a;
	return res;
}
double aMean(double x,double y) {
	double sr = (x + y) / 2;
	return sr;
}
double gMean(double x, double y) {
	double sq = sqrt(x * y);
	return sq;
}
double triangleP(double a) {
	return 3 * a;
}
double triangleS(double a) {
	return a * a + sqrt(3) / 4;
}
double rectP(double x1, double y1, double x2, double y2) {
	double p = abs(x1 - x2)*2 + abs(y1 - y2)*2;
	return p;
}
double rectS(double x1, double y1, double x2, double y2) {
	double s = abs(x1 - x2)*abs(y1 - y2);
	return s;
}
int main() {
	srand(time(nullptr));
	setlocale(LC_ALL, "rus");
	//Proc1.
	/*for (int i = 1; i <= 5; i++)
	{
		double x = rand() % 11;
		double x3 = powerA3(x);
		cout << " x = " << x << "; x^3 = "<< x3 << endl;

	}*/
	//Proc2
	/*for (int i = 1; i <= 5; i++)
	{
		double x = rand() % 11;
		double x2 = powerA2(x);
		double x4 = powerA4(x);
		cout << " x = " << x << "; x^2 = " << x2 << "; x^4 = " << x4 << endl;

	}*/
	//Proc3
	/*for (int i = 1; i <= 10; i++)
	{
		double x1 = rand() % 100 / 10.0;
		double y1 = rand() % 100 / 10.0;
		double am = aMean(x1, y1);
		double gm = gMean(x1, y1);
		cout << x1 << " " << y1 << "; am= " << am << " gm= " << gm << endl;
	}*/
	//Proc4
	/*for (int i = 1; i <= 3; i++)
	{
		double x;
		cin >> x;
		double p = triangleP(x);
		double s = triangleS(x);
		cout << "x = " << x << " p = " << p << " s = " << s << endl;
	}*/
	//Proc5
	/*for (int i = 1; i <= 3; i++)
	{
		double x1,x2,y1,y2;
		cout << "Координаты 1 вершины: " << endl;
		cin >> x1 >> y1;
		cout << "Координаты 2 вершины: " << endl;
		cin >> x2 >> y2;
		double p = rectP(x1,y1,x2,y2);
		double s = rectS(x1,y1,x2,y2);
		cout << "Периметр прямогугольника: " << p << endl;
		cout << "Площадь прямогугольника: " << s << endl;
	}*/
}