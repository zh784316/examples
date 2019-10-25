int fib_recursive(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }

    return fib_recursive(n - 1) + fib_recursive(n - 2);
}


int fib_iterative(int n) {
    int a, b, temp;
    a = 1;
    b = 1;

    while (n != 1) {
        temp = b;
        b = a + b;
        a = b;
    }

    return b;
}