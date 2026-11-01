
/* ==== FUN_0045fd98 @ 0045fd98 ==== 
 * signature: undefined __register FUN_0045fd98(uint param_1, int param_2, int * param_3)
 * body: 0045fd98-0045fe28
 */

void FUN_0045fd98(uint param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  int local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_14 = 0;
  pcStack_24 = (code *)0x45fdb7;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404090(param_2);
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  pcStack_24 = (code *)&stack0xfffffffc;
  FUN_0045f668(local_8,0x44,local_c);
  uVar1 = (**(code **)(*local_10 + 0x14))();
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
  }
  if (-1 < (int)(uVar1 - 1)) {
    iVar2 = 0;
    do {
      (**(code **)(*local_10 + 0xc))(local_10,iVar2,&local_14);
      FUN_0045f668(local_8,0x44,local_14);
      iVar2 = iVar2 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_0045fe30;
  pcStack_28 = (code *)0x45fe20;
  FUN_00403c5c(&local_14);
  pcStack_28 = (code *)0x45fe28;
  FUN_00403c5c(&local_c);
  return;
}


