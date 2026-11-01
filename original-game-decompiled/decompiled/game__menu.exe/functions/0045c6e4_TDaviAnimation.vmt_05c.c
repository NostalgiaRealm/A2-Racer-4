
/* ==== TDaviAnimation.vmt_05c @ 0045c6e4 ==== 
 * signature: undefined __register TDaviAnimation.vmt_05c(int * param_1, undefined2 * param_2, int * param_3, undefined4 * param_4)
 * body: 0045c6e4-0045c785
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviAnimation_vmt_05c(int *param_1,undefined2 *param_2,int *param_3,undefined4 *param_4)

{
  int *piVar1;
  SIZE_T dwBytes;
  HGLOBAL pvVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  
  *param_2 = 0x82;
  *param_4 = 0;
  pcStack_18 = (code *)0x45c707;
  piVar1 = (int *)FUN_00402f6c((int *)&PTR_TMemoryStream_vmt_000_0040f194,'\x01',param_3);
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  pcStack_18 = (code *)&stack0xfffffffc;
  (**(code **)(*param_1 + 0x54))(param_1,piVar1);
  dwBytes = FUN_00412680(piVar1);
  if ((int)dwBytes < 0) {
    dwBytes = thunk_FUN_00402808(dwBytes);
  }
  pvVar2 = GlobalAlloc(0x42,dwBytes);
  *param_3 = (int)pvVar2;
  if (*param_3 == 0) {
    FUN_0040b5cc();
  }
  puVar3 = GlobalLock((HGLOBAL)*param_3);
  uVar4 = FUN_00412680(piVar1);
  FUN_004028d8((undefined4 *)piVar1[1],puVar3,uVar4);
  GlobalUnlock((HGLOBAL)*param_3);
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_0045c78d;
  pcStack_1c = (code *)0x45c785;
  FUN_00402f9c(piVar1);
  return;
}


