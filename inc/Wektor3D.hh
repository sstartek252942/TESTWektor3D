#ifndef WEKTOR3D_HH
#define WEKTOR3D_HH

#include "rozmiar.h"
#include "Wektor.hh"
#include <math.h>
#include <iostream>



class Wektor3D : public Wektor<double, 3>{
static int countAll;
static int countDestroyed;

public:
  static int howManyAll(){return countAll;}
  static int howManyNow(){return countDestroyed;}

  Wektor3D() : Wektor<double, 3>() {++countAll;} //34
  Wektor3D(double x, double y, double z) {array[0] = x; array[1] = y; array[2] = z; ++countAll;} //8
  Wektor3D(const Wektor<double, 3> & M) : Wektor<double, 3>(M)  {++countAll;} //30
// : Wektor<double, 3>(M)
  ~Wektor3D(){++countDestroyed;} //127

  Wektor3D Reverse(wymiar W) const;
};

#endif
