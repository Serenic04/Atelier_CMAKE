#include <assert.h>
#include "calculator.h"

void test_add() {
    assert(add(2, 3) == 5);
}

void test_sub() {
    assert(sub(5, 3) == 2);
}

int main() {
    test_add();
    test_sub();
    return 0;
}
