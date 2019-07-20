1. tree_dsw.c: 69
  Reason: ((struct TreeNode*)NULL)->left = NULL; //Is this valid?
2. test-bitfields-3-1.c
   test-bitfields-3-1-1.c
   test-bitfields-3-2.c
   Reason: uses memcpy, maybe can be implemented to make them work.
3. test-102-1.c
   test-102-2.c
   Reason: top is not declared?
4. recursive/*
   Reason: recursive allocation functions do not work yet. 
   (/*contract*/ did not work)
5. mutex/*
   Reason: uses mutex allocation
6. process_queue.c
   Reason: uses function pointers
7.
