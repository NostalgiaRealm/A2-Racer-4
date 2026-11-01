
/* ==== FUN_00493658 @ 00493658 ==== 
 * signature: undefined __register FUN_00493658(int * param_1, int param_2)
 * body: 00493658-00493725
 */

void FUN_00493658(int *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  code *pcStack_11c;
  undefined1 *puStack_118;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  pcStack_11c = thunk_FUN_004036bc;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  if (param_2 == 2) {
    FUN_00493ac8(param_1);
    FUN_0047f840(*(int **)PTR_DAT_004ab694,param_1[0xca]);
    param_1[0x8d] = 2;
  }
  FUN_0040c968(param_1 + 0xcb);
  FUN_00493d30(param_1);
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "ExitDlg";
  FUN_00403c80(&local_c,2);
  return;
}


