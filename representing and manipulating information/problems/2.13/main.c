/* Declarations of functions implementing operations bis and bic */
int bis(int x, int m);
int bic(int x, int m);

/* Compute x|y using only calls to functions bis and bic */
int bool_or(int x, int y) {
int result = bis(x, y);
return result;
}

/* Compute x^y using only calls to functions bis and bic */
int bool_xor(int x, int y) {
int a = bic(x, y);
int b = bic(y, x);
int result = bis(a, b);
return result;
}