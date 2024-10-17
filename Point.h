#pragma once

class Point
{
private:
	double x;
	double y;

public:
	Point(double x = 0.0, double y = 0.0);
	void afficher() const;
	double distance(const Point& p) const;
	void translater(double dx, double dy);
	bool operator ==(const Point& p) const;
	~Point();

};