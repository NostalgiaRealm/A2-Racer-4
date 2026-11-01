
/* ==== FUN_0046fdc8 @ 0046fdc8 ==== 
 * signature: undefined __register FUN_0046fdc8(int * param_1, undefined4 param_2, undefined2 * param_3)
 * body: 0046fdc8-0046fe49
 */

void FUN_0046fdc8(int *param_1,undefined4 param_2,undefined2 *param_3)

{
  int *piVar1;
  DWORD DVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  code *pcStack_38;
  undefined1 *puStack_34;
  VARIANTARG local_24 [2];
  
  puStack_34 = (undefined1 *)0x46fde5;
  FUN_00404480((int)local_24,(int)&DAT_0040d7bc);
  pcStack_38 = thunk_FUN_004036bc;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  FUN_0046f49c(param_1);
  *param_3 = 0;
  piVar1 = (int *)param_1[0x83];
  DVar2 = (**(code **)(*piVar1 + 0x18))();
  if (DVar2 != 0) {
    FUN_0046cbb4(DVar2,local_24);
  }
  *in_FS_OFFSET = piVar1;
  FUN_0040454c((int)local_24,(int)&DAT_0040d7bc);
  return;
}


