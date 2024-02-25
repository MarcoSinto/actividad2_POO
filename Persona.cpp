#include <iostream>
using namespace std;
class Persona{
    protected: string nombres,apellidos,direccion, fecha_nacimiento;
    int telefono;
    Persona (){
            }
    Persona (string nom,string ape, string dir,string fe_n, int tele){
            nombres nom;
            apellidos = ape;
            direccion = dir;
            telefono = tele;
            fecha_nacimiento=fe_n;
            }
    void crear();
    void leer();
    void actualizar();
    void borrar();
    
            
};
