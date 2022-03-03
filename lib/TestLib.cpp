#include <stdio.h>
#include "TestLib.h"

TestLib::TestLib() {
    printf("Create TestLib Class\n");
}

TestLib::~TestLib() {
    printf("Destroy TestLib Class\n");
}

int TestLib::TestPrint(int a) {
    
    printf("test : %d\n",a);

    return 0;
}
    
int TestLib::TestCal(int x, int y) {
    return x+y;
}
