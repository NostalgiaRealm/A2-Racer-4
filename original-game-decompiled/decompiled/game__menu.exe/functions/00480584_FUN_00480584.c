
/* ==== FUN_00480584 @ 00480584 ==== 
 * signature: undefined __register FUN_00480584(int * param_1, int param_2, uint param_3)
 * body: 00480584-00480621
 */

void FUN_00480584(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int extraout_EDX;
  int *in_FS_OFFSET;
  int iStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  int local_14;
  undefined4 local_10;
  undefined4 *local_c;
  int local_8;
  
  local_14 = 0;
  local_c = (undefined4 *)0x0;
  puStack_20 = (undefined1 *)0x4805a3;
  local_8 = param_2;
  FUN_00404090(param_2);
  pcStack_24 = thunk_FUN_004036bc;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  puStack_20 = &stack0xfffffffc;
  local_10 = FUN_00402c50(param_3);
  uVar2 = FUN_00402ac8();
  if ((int)uVar2 >> 0x1f != extraout_EDX) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  FUN_00480b08(uVar2,&local_14);
  iVar1 = local_14;
  FUN_00403f9c((int *)&local_c,3);
  FUN_00480448(param_1,local_c);
  *in_FS_OFFSET = iVar1;
  FUN_00403c5c(&local_14);
  FUN_00403c80((int *)&local_c,2);
  return;
}


