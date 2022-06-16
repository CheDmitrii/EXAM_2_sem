//
// Created by Екатерина Чебыкина on 16.06.2022.
//

#ifndef EXAM_2_SEM_1K_SCHET_H
#define EXAM_2_SEM_1K_SCHET_H



class SCHET{
private:
    double money;
public:
    SCHET(double money = 0){
    };


    void set_money(double money){
        this->money = money;
    };

    double get_money(){
        return this->money;
    };
//    double getMoney() const {
//        return money;
//    }
//
//    void setMoney(double money) {
//        SCHET::money = money;
//    }
    void plusMoney(double money){
        this->money += money;
    }
    void minusMoney(double money){
        this->money -= money;
    }
    void procent(double p){
        this->money *= p;
    };

    ~SCHET(){};
};

void printW(SCHET w);

#endif //EXAM_2_SEM_1K_SCHET_H
