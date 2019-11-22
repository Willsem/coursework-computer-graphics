#ifndef __DRAWER_H
#define __DRAWER_H

#include <cmath>

#include "Object/Camera.h"

class Drawer
{
public:
    virtual ~Drawer() = default;
    virtual void drawLine(const Point3D& a, const Point3D& b) = 0;
    virtual void drawParticle(const Point3D& particle, double r, double g, double b) = 0;
    virtual void skyCube() = 0;
    virtual void setCamera() = 0;

protected:
    Drawer(const size_t w, const size_t h, Camera camera) : w(w), h(h), camera(camera) { }

protected:
    const size_t w;
    const size_t h;
    Camera camera;
};

#endif // __DRAWER_H
