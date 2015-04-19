/*函数之间的值传递，指针传递，引用传递*/

#include<stdio.h>
#include<stdlib.h>

void value (int p) {
    printf ("\npass by Value");
    printf ("\n+++++++\n");
    printf ("%x", &p);
    printf ("\n%x", p);
    printf ("\n+++++++\n");
    p = 0xff;
}

void pointer (int *p) {
    printf ("\npass by Pointer");
    printf ("\n+++++++\n");
    printf ("%x", &p);
    printf ("\n%x", p);
    printf ("\n%x", *p);
    printf ("\n+++++++\n");
    *p = 0xff;
}

/*C语言不存在引用传递, C++ 中才有
 *
 void reference (int &p) {
 printf ("\npass by Reference");
 printf ("\n+++++++\n");
 printf ("%x", &p);
 printf ("\n%x", p);
 printf ("\n+++++++\n");
 p = 0xff;
 }
 */

int main () {
    int cmd, n = 0x10;

    printf ("\n%x", &n);
    printf ("\n%x\n----------\n", n);

    printf ("Please select which way you want to use: \n");
    printf ("1.value; 2.pointer; 0.end \n");
    while (scanf ("%d", &cmd), cmd != 0) {
        switch (cmd) {
            case 1:
                value (n);
                break;
            case 2:
                pointer (&n);	//传入的为地址
                break;
            default:
                printf ("Please retype \n");
        }
        printf ("\n----------\n");
        printf ("%x\n\n", n);
        printf ("Please select which way you want to use: \n");
        printf ("1.value; 2.pointer; 0.end \n");
    }
    return 0;
}
