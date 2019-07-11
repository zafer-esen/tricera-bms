# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"






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

static void
{
    int *lo = data->lo;
    int *hi = data->hi;

    if (*lo >= *hi) {


    }

    data->lo = 0;
    data->hi = 0;
}

int main() {
    TData data;
    alloc_data(&data);

    return 0;
}
