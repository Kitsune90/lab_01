//
//  Persona.hpp
//  lab_01
//
//  Created by Cristiano Cavo on 16/04/16.
//  Copyright © 2016 Cristiano Cavo. All rights reserved.
//

#ifndef Persona_hpp
#define Persona_hpp

#include <iostream>

#endif /* Persona_hpp */

class Persona {
public:
    std::string getNome();
    std::string getCognome();
    
private:
    std::string nome;
    std::string cognome;
};
