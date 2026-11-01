
/* ==== FUN_00452108 @ 00452108 ==== 
 * signature: undefined __register FUN_00452108(int param_1, int param_2, undefined * param_3)
 * body: 00452108-00452195
 */

void FUN_00452108(int param_1,int param_2,undefined *param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  bool bVar2;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  undefined4 *local_c;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcStack_20 = (code *)0x45212d;
  local_8 = param_1;
  FUN_00451fc4(param_1,param_2,param_3);
  pcStack_20 = (code *)0x452135;
  FUN_00451f50(local_8);
  bVar2 = true;
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  pcStack_20 = (code *)&stack0xfffffffc;
  FUN_00402bc0(*(int **)(local_8 + 0xc),(int *)&DAT_004aab30,4);
  if (!bVar2) {
    FUN_00451dbc(DAT_004ac85c,5,(int *)&local_c);
    piVar1 = FUN_0040b5d8((int *)&DAT_00451ca0,'\x01',local_c);
    FUN_004036f4(piVar1);
  }
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_0045219d;
  pcStack_24 = (code *)0x452195;
  FUN_004521c0(local_8);
  return;
}


