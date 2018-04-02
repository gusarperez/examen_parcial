//
// Created by gusar on 4/2/2018.
//

#include "Dollar.h"
#include <string>
Dollar::Dollar(){
    peso=18.50;
    dollar=1;
}
Dollar::Dollar(float peso, float dollar){
    this->dollar=dollar;
    this->peso=peso;
}
//Adicion
Dollar operator + (const Dollar &D1, const Dollar &D2){
    Dollar dlll;
    dlll.dollar= D1.dollar + D2.dollar;
    Dollar dll;
    dll.dollar= D1.peso + D2.dollar;
    Dollar dl;
    dl.dollar= D1.dollar + D2.peso;
    return dlll, dll,dl;
}
Dollar operator - (const Dollar &D1, const Dollar &D2){
    Dollar operator - (const Dollar &D1, const Dollar &D2){
        Dollar resta;
        resta.dollar= D1.dollar - D2.dollar;
        Dollar rest;
        rest.dollar=D1.peso - D2.dollar;
        Dollar res;
        res.dollar=D1.dollar - D2.peso;
        return resta, rest;
}
    bool operator <(const Dollar &D1, const Dollar &D2) {
        float a = D1.peso;
        float b = D2.dollar;
        return a <= b;
    }
    bool operator >(const Dollar &D1, const Dollar &D2) {
        float a = D1.peso;
        float b = D2.dollar;
        return a > b;
    }
    bool operator <(const Dollar &D1, const Dollar &D2) {
        float a = D1.peso;
        float b = D2.dollar;
        return a <= b;
    }
    bool operator <=(const Dollar &D1, const Dollar &D2) {
        float a = D1.peso;
        float b = D2.dollar;
        return a <= b;
    }
    bool operator >=(const Dollar &D1, const Dollar &D2) {
        float a = D1.peso;
        float b = D2.dollar;
        return a >= b;
    }
    bool operator !=(const Dollar &D1, const Dollar &D2) {
        float a = D1.peso;
        float b = D2.dollar;
        return a != b;
    }

    std::string to_String(){
    return std::to_string(peso)+"MXN" + std::to_string(dollar)+"USD";
}
