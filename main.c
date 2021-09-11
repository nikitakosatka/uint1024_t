#include <stdio.h>

struct uint1024_t {
    unsigned int number;
};

struct uint1024_t from_uint(unsigned int x) {
    struct uint1024_t n1;
    n1.number = x;

    return n1;
}

struct uint1024_t add_op(struct uint1024_t x, struct uint1024_t y) {
    struct uint1024_t n1;
    n1.number = x.number + y.number;

    return n1;
}

struct uint1024_t subtr_op(struct uint1024_t x, struct uint1024_t y) {
    struct uint1024_t n1;
    n1.number = x.number - y.number;

    return n1;
}

struct uint1024_t mult_op(struct uint1024_t x, struct uint1024_t y) {
    struct uint1024_t n1;
    n1.number = x.number * y.number;

    return n1;
}

void scanf_value(struct uint1024_t *x) {
    unsigned int n;
    scanf("%d", &n);
    x->number = n;
}

void printf_value(struct uint1024_t x) {
    printf("%d\n", x.number);
}

int main() {
    struct uint1024_t n;
    scanf_value(&n);
    printf_value(n);
    return 0;
}