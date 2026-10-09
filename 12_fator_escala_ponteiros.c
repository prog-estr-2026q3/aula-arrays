#include <stdio.h>
#include <stddef.h>

int main(void) {
    char   vc[2] = {'A', 'B'};
    int    vi[2] = {10, 20};
    double vd[2] = {1.5, 2.5};

    char   *pc = vc;
    int    *pi = vi;
    double *pd = vd;

    printf("char:   %p -> +1 -> %p (dif: %td bytes)\n",
           (void*)pc, (void*)(pc + 1), (char*)(pc + 1) - (char*)pc);
    printf("int:    %p -> +1 -> %p (dif: %td bytes)\n",
           (void*)pi, (void*)(pi + 1), (char*)(pi + 1) - (char*)pi);
    printf("double: %p -> +1 -> %p (dif: %td bytes)\n",
           (void*)pd, (void*)(pd + 1), (char*)(pd + 1) - (char*)pd);

    return 0;
}
