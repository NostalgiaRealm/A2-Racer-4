
/* ==== FUN_00402a42 @ 00402a42 ==== 
 * signature: undefined4 __stdcall FUN_00402a42(void)
 * body: 00402a42-00402a64
 */

undefined4 FUN_00402a42(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(code **)((int)ExceptionList + 4) == FUN_004029b8) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    uVar1 = 1;
  }
  return uVar1;
}


