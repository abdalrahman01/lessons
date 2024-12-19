#include <stdio.h>

// لما تضيف هذا الملف أنت تخبر البرنامج (اللينكر) أن هناك متغيرات معرفة مسبقًا
#include "variable.h" // variables are declared as external inside this file


void printNumbers() {
    printf("NumberA: %i, NumberB: %i \n\n", numberA, numberB); 
}