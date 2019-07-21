#ifndef stdlibIsDefined
#define stdlibIsDefined

#define NULL 0
#define __VERIFIER_error() assert(0)
#define free __foo

#define malloc calloc

void __foo(void *arg){
/*free function is not implemented in TriCera yet, so an empty version is used
to get rid of errors*/
}

void abort(void){
  return 1; //only will work from main, but the test cases seems to call it from main
}

#endif
