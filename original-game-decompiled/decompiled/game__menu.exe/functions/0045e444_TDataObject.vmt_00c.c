
/* ==== TDataObject.vmt_00c @ 0045e444 ==== 
 * signature: undefined __register TDataObject.vmt_00c(int * param_1, undefined4 * param_2)
 * body: 0045e444-0045e4c9
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDataObject_vmt_00c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  code *pcStack_118;
  code *pcStack_114;
  byte local_108 [256];
  int local_8;
  
  pcStack_114 = (code *)&stack0xfffffffc;
  local_8 = 0;
  pcStack_118 = thunk_FUN_004036bc;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  iVar1 = FUN_00402ee0(param_2);
  iVar2 = FUN_00402ee0(param_1);
  if (iVar1 != iVar2) {
    FUN_00402ee4(*param_1,local_108);
    FUN_00403e80(&local_8,local_108);
    FUN_00403ee4(&local_8,(undefined4 *)".Assign: Incompatible classtype");
    FUN_00403c40(local_8);
  }
  *in_FS_OFFSET = uStack_11c;
  pcStack_114 = FUN_0045e4d1;
  pcStack_118 = (code *)0x45e4c9;
  FUN_00403c5c(&local_8);
  return;
}


