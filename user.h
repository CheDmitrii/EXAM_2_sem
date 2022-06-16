//
// Created by Екатерина Чебыкина on 16.06.2022.
//

#ifndef EXAM_2_SEM_1K_USER_H
#define EXAM_2_SEM_1K_USER_H

#include <iostream>
#include "schet.h"


class URES{
private:
    SCHET* scheta;
    int cuntSchet;
    std::string name;
public:
    URES(){
        this->name = "no name";
        this->cuntSchet = 1;
        this->scheta = new SCHET [cuntSchet];
    }
    URES(std::string name, int cuntSchet, SCHET* arr){
        this->name = name;
        this->cuntSchet = cuntSchet;
        scheta = new SCHET [cuntSchet];
        for (int i = 0; i < cuntSchet; i++){
            scheta[i].set_money(arr[i].get_money());
        }
    }
    void printName(){
        std::cout << this->name << std::endl;
    };
    void printSchet(int numSchet){
        std::cout << this->scheta[numSchet - 1].get_money() << std::endl;
    }
    void printScheta(){
        for(int i = 0; i < cuntSchet; i++){
            std::cout << this->scheta[i].get_money() << std::endl;
        }
    };
    void plusSchet(int cuntSCHET, double money){
        this->scheta[cuntSCHET - 1].plusMoney(money);
    }
    void minSchet(int cuntSchet, double money){
        this->scheta[cuntSchet - 1].minusMoney(money);
    }
    void procentScheta(int cuntSchet, double p){
        scheta[cuntSchet].procent(p);
    }
    void printINFO(){
        printName();
        printScheta();
    }

    ~URES(){
        delete []scheta;
    };
};



#endif //EXAM_2_SEM_1K_USER_H
