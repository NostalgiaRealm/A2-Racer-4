
/* ==== thunk_FUN_00434ea8 @ 00434ea4 ==== 
 * signature: undefined4 __register thunk_FUN_00434ea8(int param_1)
 * body: 00434ea4-00434ea5
 * thunk to: FUN_00434ea8
 */

undefined4 thunk_FUN_00434ea8(int param_1)

{
  int iVar1;
  
  do {
    iVar1 = param_1;
    param_1 = *(int *)(iVar1 + 0x58);
  } while (param_1 != 0);
  return *(undefined4 *)(iVar1 + 100);
}


