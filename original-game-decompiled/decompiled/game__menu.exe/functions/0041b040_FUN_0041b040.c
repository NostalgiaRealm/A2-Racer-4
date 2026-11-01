
/* ==== FUN_0041b040 @ 0041b040 ==== 
 * signature: undefined __register FUN_0041b040(undefined4 * param_1, uint * param_2)
 * body: 0041b040-0041b0bd
 */

void FUN_0041b040(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined4 uStack_124;
  code *pcStack_120;
  code *pcStack_11c;
  byte local_10c [256];
  uint *local_c;
  uint *local_8;
  
  pcStack_11c = (code *)&stack0xfffffffc;
  local_c = (uint *)0x0;
  pcStack_120 = thunk_FUN_004036bc;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  iVar2 = param_1[2] + -1;
  uVar3 = iVar2 == 0;
  local_8 = param_2;
  if (-1 < iVar2) {
    do {
      piVar1 = (int *)FUN_004102b0(param_1,iVar2);
      FUN_00402ee4(*piVar1,local_10c);
      FUN_00403e80((int *)&local_c,local_10c);
      FUN_00403fec(local_c,local_8);
      if ((bool)uVar3) break;
      iVar2 = iVar2 + -1;
      uVar3 = iVar2 == -1;
    } while (!(bool)uVar3);
  }
  *in_FS_OFFSET = uStack_124;
  pcStack_11c = FUN_0041b0c5;
  pcStack_120 = (code *)0x41b0bd;
  FUN_00403c5c((int *)&local_c);
  return;
}


