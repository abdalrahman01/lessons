#include <stdio.h>

void printNumbers(); 


int numberA, numberB; // First time definition يجب أن تعرّفها مرة واحد فقط، وهذه الطريقة تعطيها قيمة صفر من البداية

int main() {

    // هنا أنت تعيطها قيمة أخرى
    numberA = 4; 
    numberB = 5; 

    printNumbers();

}