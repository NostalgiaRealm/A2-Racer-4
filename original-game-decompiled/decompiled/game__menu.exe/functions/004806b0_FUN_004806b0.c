
/* ==== FUN_004806b0 @ 004806b0 ==== 
 * signature: undefined __register FUN_004806b0(int * param_1, int param_2, int param_3, uint param_4)
 * body: 004806b0-00480760
 */

void FUN_004806b0(int *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int extraout_EDX;
  int *in_FS_OFFSET;
  int iStack_30;
  code *pcStack_2c;
  undefined1 *puStack_28;
  int local_18 [3];
  undefined4 *local_c;
  int local_8;
  
  local_c = (undefined4 *)0x0;
  local_18[2] = 0;
  local_18[1] = 0;
  local_18[0] = 0;
  puStack_28 = (undefined1 *)0x4806cf;
  local_8 = param_2;
  FUN_00404090(param_2);
  pcStack_2c = thunk_FUN_004036bc;
  iStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_30;
  puStack_28 = &stack0xfffffffc;
  local_18[2] = FUN_00402c50(param_4);
  uVar2 = FUN_00402ac8();
  if ((int)uVar2 >> 0x1f != extraout_EDX) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  FUN_00480b08(param_3,local_18 + 1);
  FUN_00480b08(uVar2,local_18);
  iVar1 = local_18[0];
  FUN_00403f9c((int *)&local_c,4);
  FUN_00480448(param_1,local_c);
  *in_FS_OFFSET = iVar1;
  FUN_00403c80(local_18,2);
  FUN_00403c80((int *)&local_c,2);
  return;
}


