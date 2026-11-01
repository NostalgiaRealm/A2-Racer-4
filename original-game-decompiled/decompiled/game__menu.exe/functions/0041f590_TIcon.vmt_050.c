
/* ==== TIcon.vmt_050 @ 0041f590 ==== 
 * signature: undefined TIcon.vmt_050(void)
 * body: 0041f590-0041f61e;0041f636-0041f645
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIcon_vmt_050(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  undefined1 auStack_e [2];
  ushort uStack_c;
  int *piStack_8;
  
  puStack_20 = (undefined1 *)0x41f5a9;
  piStack_8 = (int *)FUN_00402f6c((int *)&PTR_TMemoryStream_vmt_000_0040f194,'\x01',param_3);
  pcStack_24 = thunk_FUN_00403408;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar1 = FUN_00412680(param_2);
  iVar2 = FUN_00412664(param_2);
  (**(code **)*piStack_8)(piStack_8,iVar1 - iVar2);
  iVar1 = FUN_00412680(piStack_8);
  FUN_004126b8(param_2,piStack_8[1],iVar1);
  FUN_004126b8(piStack_8,auStack_e,6);
  if (1 < uStack_c) {
    FUN_004197bc();
  }
  FUN_0041f648((int)param_1,0,piStack_8);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = (undefined1 *)0x41f63f;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


