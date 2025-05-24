
/**
 * Created by JP 5/13/25
 */

#ifndef DATASET_H
#define DATASET_H

#include "Data.h"
#include "DataLinkedList.h"
#include <iostream>
#include <string>
#include <fstream>

class Dataset{

public:
    
    //import
    void importData(std::string fileName);
    
    //Sorting Functions All Virtual
    void sortFMortality();
    void sortMMortality();
    void sortAlphabetically();

        //Print Functions
        void printTop10();
        void printTop20();
        void printBottom10();
        void printBottom20();
        void printAll();

        //Analysis Function
        void analyzeData();

    //export
    void exportData(std::string fileName);

        //destructor
        ~Dataset();

        //getter+setter
        int getSize();
        void setSize(int size);

    private:
        int size = 0; //size of data
        Data** dataArr;
        DataLinkedList dataLL;
};

#endif
