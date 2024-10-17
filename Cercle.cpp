#include "Cercle.h"
#include <iostream>

const double Cercle::PI = 3.14;

Cercle::Cercle(int id, double r, Point p) :id(id), r(r), c(p)
{
    std::cout << "Ctor cercle";
}
void Cercle::modifierRayon(double r)
{
    this->r += r;
}

void Cercle::translaterCentre(double dx, double dy)
{
    this->c.translater(dx, dy);
}

double Cercle::surface() const
{
    return pow(this->r, 2) * PI;
}

double Cercle::perimetre() const
{
    return PI * this->r * 2;
}


bool Cercle::operator==(const Cercle& other) const
{
    return this->c == other.c && this->r == other.r;
}

bool Cercle::apparient(const Point& p) const
{
    return this->c.distance(p) <= this->r;
}



void Cercle::afficher() const
{
    std::cout << "id : " << this->id << std::endl;
    std::cout << "rayon : " << this->r << std::endl;
    this->c.afficher();
}

Cercle::~Cercle()
{
    std::cout << "Dtor cercle";
}
