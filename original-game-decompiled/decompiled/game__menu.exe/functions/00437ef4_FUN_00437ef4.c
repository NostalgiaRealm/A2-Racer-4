
/* ==== FUN_00437ef4 @ 00437ef4 ==== 
 * signature: undefined FUN_00437ef4(void)
 * body: 00437ef4-00437f1d
 */

void FUN_00437ef4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (((param_2 != 0) && (param_2 != 0)) &&
     (*(char *)(*(int *)(param_2 + 0x14) + 0x10) == *(char *)(param_1 + 0x48))) {
    uVar1 = FUN_00402ac8();
    *(undefined4 *)(param_2 + 0x20) = uVar1;
  }
  return;
}


