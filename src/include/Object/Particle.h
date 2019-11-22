#ifndef __PARTICLE_H
#define __PARTICLE_H

#include "VisibleObject.h"
#include "Point3D.h"

class Particle : public VisibleObject
{
public:
    Particle();
    Particle(double x, double y, double z);
    Particle(const Point3D& point);

    Particle(double x, double y, double z, double r, double g, double b);
    Particle(const Point3D& point, double r, double g, double b);

    void draw(Drawer& drawer) override;
    void scale(const Point3D& center, double k) override;
    void offset(double dx, double dy, double dz) override;
    void rotateX(const Point3D& center, double a) override;
    void rotateY(const Point3D& center, double a) override;
    void rotateZ(const Point3D& center, double a) override;

    const Point3D& point();
    Point3D constPoint();

private:
    Point3D _point;

    double _r;
    double _g;
    double _b;
};

#endif // __PARTICLE_H
