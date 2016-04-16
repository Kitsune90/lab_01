//
//  main.cpp
//  lab_01
//
//  Created by Cristiano Cavo on 16/04/16.
//  Copyright © 2016 Cristiano Cavo. All rights reserved.
//


#include <iostream>
#include "Elenco.hpp"

using namespace std;

/*
 Questo è il main voluto dal professore, non si deve cambiare.
 */
int _tmain(int argc, _TCHAR* argv[]){
    
    Elenco e1;
    e1.add(Persona("Alessandro","Becero"));
    e1.add(Persona("Carlo","Dado"));
    e1.add(Persona("Elena","Fottuta"));
    
    Elenco e2=e1;
    
    e1.remove(1);
    e2.remove(2);
    
    for(int i=0;i<e1.size();i++)
        cout<<i<<": "
            <<e1.get(i).getNome()
            <<" "<<e1.get(i).getCognome()
            <<endl;
    
    cout<<endl;
    
    for(int i=0;i<e2.size();i++)
        cout<<i<<": "
            <<e2.get(i).getNome()
            <<" "<<e2.get(i).getCognome()
            <<endl;
    
    cout<<endl;
    
    e1.clear();
    
    cout<<e1.size()<<endl;
    
    return 0;
}
