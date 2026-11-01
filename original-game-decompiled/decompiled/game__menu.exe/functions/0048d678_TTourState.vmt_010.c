
/* ==== TTourState.vmt_010 @ 0048d678 ==== 
 * signature: undefined TTourState.vmt_010(void)
 * body: 0048d678-0048d754
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TTourState_vmt_010(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_128;
  code *pcStack_124;
  undefined1 *puStack_120;
  byte abStack_110 [256];
  int iStack_10;
  undefined4 *puStack_c;
  int *piStack_8;
  
  puStack_120 = &stack0xfffffffc;
  puStack_c = (undefined4 *)0x0;
  iStack_10 = 0;
  pcStack_124 = thunk_FUN_004036bc;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  piStack_8 = param_2;
  FUN_00402ee4(*param_1,abStack_110);
  FUN_00403e80(&iStack_10,abStack_110);
  FUN_00403f9c((int *)&puStack_c,3);
  puVar1 = puStack_c;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  TRaceState_vmt_010(param_1,piStack_8);
  uVar2 = FUN_00462434(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
  if (SBORROW4(uVar2,1)) {
    thunk_FUN_00402808(uVar2);
  }
  if (-1 < (int)(uVar2 - 1)) {
    iVar4 = 0;
    do {
      piVar3 = (int *)FUN_0048d54c((int)param_1,iVar4);
      (**(code **)(*piVar3 + 0x10))(piVar3,piStack_8);
      iVar4 = iVar4 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "SaveToStream";
  FUN_00403c80(&iStack_10,2);
  return;
}


