# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"
# 1 "./stdlib.h" 1







void __foo(void *arg){


}

void abort(void){
  return 1;
}
# 2 "<stdin>" 2




typedef struct {
    int *lo;
    int *hi;
} TData;

static void alloc_data(TData *pdata)
{
    pdata->lo = malloc(sizeof(int));
    pdata->hi = malloc(sizeof(int));

    *(pdata->lo) = 4;
    *(pdata->hi) = 8;
}

static void free_data(TData *data)
{
    int *lo = data->lo;
    int *hi = data->hi;

    if (*lo >= *hi) {
        __foo(lo);
        __foo(hi);
    }

    data->lo = 0;
    data->hi = 0;
}

int main() {
    TData data;
    alloc_data(&data);
    free_data(&data);
    return 0;
}
