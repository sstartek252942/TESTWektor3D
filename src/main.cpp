#include <iostream>
#include <stdlib.h>

#include "Wektor3D.hh"



int main() {
    Wektor<double, 3> W;
          
    Wektor3D W1;
    Wektor3D W2(1,2,3);
    Wektor3D W3(W);
    {
      Wektor3D W1;
      Wektor3D W2(1,2,3);
      Wektor3D W3(W);
    }
    std::cout << "Zniszczona ilosc obiektow Wektor3D: " << Wektor3D::howManyNow() << std::endl ; //Aktualna  
    std::cout << "Laczna ilosc obiektow Wektor3D: "   << Wektor3D::howManyAll() << std::endl;
}
