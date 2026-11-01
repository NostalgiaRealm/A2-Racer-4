
/* ==== TControlCanvas.vmt_014 @ 0042d3ec ==== 
 * signature: undefined __register TControlCanvas.vmt_014(int * param_1)
 * body: 0042d3ec-0042d470;0042d478-0042d491
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControlCanvas_vmt_014(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  undefined1 *puStack_10;
  
  if (param_1[0x16] == 0) {
    puStack_10 = (undefined1 *)0x42d405;
    TCanvas_vmt_014();
  }
  else {
    if (param_1[0x17] == 0) {
      puStack_10 = (undefined1 *)0x42d41d;
      piVar1 = (int *)FUN_00410750(DAT_004ac78c);
      pcStack_14 = thunk_FUN_004036bc;
      uStack_18 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_18;
      puStack_10 = &stack0xfffffffc;
      if (3 < piVar1[2]) {
        puStack_10 = &stack0xfffffffc;
        FUN_0042d258();
      }
      iVar2 = (**(code **)(*(int *)param_1[0x16] + 0x44))((int *)param_1[0x16],param_1 + 0x18);
      param_1[0x17] = iVar2;
      FUN_00410104(piVar1,(int)param_1);
      *in_FS_OFFSET = uStack_18;
      puStack_10 = (undefined1 *)0x42d478;
      pcStack_14 = (code *)0x42d470;
      FUN_004107b4(DAT_004ac78c);
      return;
    }
    puStack_10 = (undefined1 *)0x42d486;
    FUN_00419558(param_1,param_1[0x17]);
    puStack_10 = (undefined1 *)0x42d48e;
    FUN_0042d4e0((int)param_1);
  }
  return;
}


