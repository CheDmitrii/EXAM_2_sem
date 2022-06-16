#include <iostream>
#include "user.h"

using std::string;

int main() {
    int cunt = 3;
    SCHET arr[cunt];
    arr[0].set_money(65000);
    arr[1].set_money(43000);
    arr[2].set_money(200);
    URES w("Dmitrii", cunt, arr);
    w.printSchet(1);
    w.printScheta();
    w.printName();
    w.printINFO();
    w.printSchet(2);
    w.minSchet(1, 15000);
    w.printSchet(1);
    SCHET q;
//    printW(q); если раскомитить не работает программа
    return 0;
}

