#include <stdio.h>
#include "foo.h"
#include "foo1.h"
#include "foo2.h"
 
int main(void)
{
    puts("This is a shared library test...");
    foo();
    foo1();
    foo2();
    return 0;
}
