#define NULL 0
#define __VERIFIER_error() assert(0)
#define free __foo

void __foo(void *arg){
/*free function is not implemented in TriCera yet, so an empty version is used
to get rid of errors*/
}
