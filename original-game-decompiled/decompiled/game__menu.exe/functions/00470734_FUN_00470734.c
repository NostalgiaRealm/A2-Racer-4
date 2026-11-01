
/* ==== FUN_00470734 @ 00470734 ==== 
 * signature: undefined __register FUN_00470734(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00470734-004707da
 */

void FUN_00470734(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  DWORD DVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_4c;
  code *pcStack_48;
  undefined1 *puStack_44;
  VARIANTARG local_34 [2];
  undefined4 local_14;
  undefined *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_44 = (undefined1 *)0x470751;
  FUN_00404480((int)local_34,(int)&DAT_0040d7bc);
  pcStack_48 = thunk_FUN_004036bc;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_44 = &stack0xfffffffc;
  FUN_0046f49c(param_1);
  local_10 = &DAT_004ab0ac;
  local_c = 1;
  local_8 = 1;
  piVar1 = (int *)param_1[0x83];
  local_14 = param_3;
  DVar2 = (**(code **)(*piVar1 + 0x18))();
  if (DVar2 != 0) {
    FUN_0046cbb4(DVar2,local_34);
  }
  *in_FS_OFFSET = piVar1;
  FUN_0040454c((int)local_34,(int)&DAT_0040d7bc);
  return;
}


