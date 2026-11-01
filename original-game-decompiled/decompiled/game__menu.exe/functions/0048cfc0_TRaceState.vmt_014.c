
/* ==== TRaceState.vmt_014 @ 0048cfc0 ==== 
 * signature: undefined __register TRaceState.vmt_014(int * param_1, int * param_2)
 * body: 0048cfc0-0048d067
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TRaceState_vmt_014(int *param_1,int *param_2)

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
  FUN_0045e350(param_2,param_1 + 2);
  FUN_0045e350(param_2,param_1 + 3);
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "LoadFromStream";
  FUN_00403c80(&local_c,2);
  return;
}


