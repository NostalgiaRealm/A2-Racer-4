
/* ==== FUN_0046e648 @ 0046e648 ==== 
 * signature: undefined __register FUN_0046e648(int * param_1)
 * body: 0046e648-0046e6a6
 */

void FUN_0046e648(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  int *local_8;
  
  pcStack_14 = (code *)0x46e65d;
  local_8 = param_1;
  FUN_004058c0(param_1);
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (DAT_004ad1e0 != (code *)0x0) {
    pcStack_14 = (code *)&stack0xfffffffc;
    (*DAT_004ad1e0)();
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0046e6ae;
  pcStack_18 = (code *)0x46e6a6;
  FUN_00405860((int *)&local_8);
  return;
}


