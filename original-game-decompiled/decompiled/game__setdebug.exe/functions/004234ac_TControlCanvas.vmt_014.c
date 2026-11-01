
/* ==== TControlCanvas.vmt_014 @ 004234ac ==== 
 * signature: undefined __register TControlCanvas.vmt_014(int * param_1)
 * body: 004234ac-00423530;00423538-00423551
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
    puStack_10 = (undefined1 *)0x4234c5;
    TCanvas_vmt_014();
  }
  else {
    if (param_1[0x17] == 0) {
      puStack_10 = (undefined1 *)0x4234dd;
      piVar1 = (int *)FUN_0040f38c(DAT_0044777c);
      pcStack_14 = thunk_FUN_00403434;
      uStack_18 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_18;
      puStack_10 = &stack0xfffffffc;
      if (3 < piVar1[2]) {
        puStack_10 = &stack0xfffffffc;
        FUN_00423318();
      }
      iVar2 = (**(code **)(*(int *)param_1[0x16] + 0x44))((int *)param_1[0x16],param_1 + 0x18);
      param_1[0x17] = iVar2;
      FUN_0040eec8(piVar1,(int)param_1);
      *in_FS_OFFSET = uStack_18;
      puStack_10 = (undefined1 *)0x423538;
      pcStack_14 = (code *)0x423530;
      FUN_0040f3f0(DAT_0044777c);
      return;
    }
    puStack_10 = (undefined1 *)0x423546;
    FUN_004174b0(param_1,param_1[0x17]);
    puStack_10 = (undefined1 *)0x42354e;
    FUN_004235a0((int)param_1);
  }
  return;
}


