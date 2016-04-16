//
//  Elenco.cpp
//  lab_01
//
//  Created by Cristiano Cavo on 16/04/16.
//  Copyright © 2016 Cristiano Cavo. All rights reserved.
//

#include "Elenco.hpp"

Elenco::Elenco(){}
Elenco::~Elenco(){}

Elenco::Elenco(Persona p){
    this->persone.push_back(p);
}

Persona Elenco::get(int i){
    return persone[i];
}

void Elenco::add(Persona p){
    this->persone.push_back(p);
}

Persona Elenco::remove(int i){

    Persona tmp = persone[i];
    this->persone.erase(persone.begin() + i);
    return tmp;
}

void Elenco::clear(){
    //persone.clear();
    std::vector<Persona>().swap(this->persone);
}

int Elenco::size(){
    return this->persone.size();
}