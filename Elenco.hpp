//
//  Elenco.hpp
//  lab_01
//
//  Created by Cristiano Cavo on 16/04/16.
//  Copyright © 2016 Cristiano Cavo. All rights reserved.
//

#ifndef Elenco_hpp
#define Elenco_hpp

#include <iostream>
#include <list>

#include "Persona.hpp"

#endif /* Elenco_hpp */

class Elenco {
private:
    std::list<Persona> persone;
    int numeroPersone;
    
public:
    Persona get(int i);
    bool add(Persona p);
    Persona pop();
    Persona remove(int i);
    int size();
    bool clear();
};
