
/* ==== FUN_00482950 @ 00482950 ==== 
 * signature: undefined __register FUN_00482950(int * param_1)
 * body: 00482950-004829db
 */

void FUN_00482950(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_118;
  code *pcStack_114;
  code *pcStack_110;
  byte local_108 [256];
  undefined4 *local_8;
  
  pcStack_110 = (code *)&stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  pcStack_114 = thunk_FUN_004036bc;
  uStack_118 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_118;
  FUN_00402ee4(*param_1,local_108);
  FUN_00403e80((int *)&local_8,local_108);
  FUN_00403ee4((int *)&local_8,(undefined4 *)".StopCurrentSound");
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  if ((int *)param_1[1] != (int *)0x0) {
    FUN_00481f5c(param_1,(int *)param_1[1]);
  }
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = uStack_118;
  pcStack_110 = FUN_004829e3;
  pcStack_114 = (code *)0x4829db;
  FUN_00403c5c((int *)&local_8);
  return;
}


