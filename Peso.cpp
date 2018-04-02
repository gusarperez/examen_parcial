//
// Created by gusar on 4/2/2018.
//

#include "Peso.h"
Peso::Peso(){
    peso=18.50;
    dollar=1;
}
Peso::Peso(float peso, float dollar){
    this->dollar=dollar;
    this->peso=peso;
}
Peso operator + (const Peso &P1, const Peso &P2){

}
Peso operator