#ifndef MACROS
#define MACROS
#define MX_SUM(x, y) (x+y)
#define MX_MULT(x, y) (x)*(y)
#define MX_MIN(x, y) (x>y)? (y) : (x)
#define MX_ABS(x) (x > 0) ? (x) : (x)*-1
#define MX_IS_ODD(x) (x % 2 != 0) ? 1 : 0
#endif