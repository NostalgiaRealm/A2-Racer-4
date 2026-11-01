
/* ==== FUN_1000eaba @ 1000eaba ==== 
 * signature: undefined4 __stdcall FUN_1000eaba(void)
 * body: 1000eaba-1000eadc
 */

undefined4 FUN_1000eaba(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(code **)((int)ExceptionList + 4) == FUN_1000ea30) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    uVar1 = 1;
  }
  return uVar1;
}


