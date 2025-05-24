//
// Created by Ryank on 5/13/2025.
// Modified by JP 5/13/25
//

#ifndef DATA_H
#define DATA_H
#include "iostream"
#include "string"

class Data {

  public:
  
  Data(std::string country, double MMortality, double FMortality);
  ~Data();
  
  //setters - might not be needed
  void setCountry(std::string country);
  void setMMortality(double MMortality);
  void setFMortality(double FMortality);
  
  //getters
  std::string getCountry() const;
  double getFMortality() const;
  double getMMortality() const;

private:
  
  std::string country;
  double MMortality;
  double FMortality;

};
#endif //DATA_H
