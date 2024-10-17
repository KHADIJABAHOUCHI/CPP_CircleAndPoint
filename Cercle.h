#pragma once
#include "Point.h"
class Cercle
{
private:

	const static double PI;//variable ne depend pas des objets
	int id;//identifiant
	double r;//rayon
	Point c;//centre

public:
	Cercle(int id, double r, Point p);
	void afficher() const;
	void modifierRayon(double);
	void translaterCentre(double, double);
	bool operator ==(const Cercle&) const;
	bool apparient(const Point&) const;
	double surface() const;
	double perimetre() const;
	~Cercle();





};


