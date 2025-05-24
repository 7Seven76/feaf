//
// Created by Ryank on 5/13/2025.
// Modified by JP 5/13/25

#include "Data.h"
#include <iostream>
#include <string>

Data::Data(std::string country, double MMortality, double FMortality){
    this->country = country;
    this->MMortality = MMortality;
    this->FMortality = FMortality;  
};

Data::~Data(){};

void Data::setCountry(std::string country) {
    this->country = country;
}

void Data::setMMortality(double MMortality){
    this->MMortality = MMortality;
}

void Data::setFMortality(double FMortality){
    this->FMortality = FMortality;
}

std::string Data::getCountry() const{
    return this->country;
}

double Data::getFMortality() const{
    return this->FMortality;
}

double Data::getMMortality() const{
    return this->MMortality;
}


