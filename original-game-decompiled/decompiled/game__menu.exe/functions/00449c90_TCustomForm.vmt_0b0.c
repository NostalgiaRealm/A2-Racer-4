
/* ==== TCustomForm.vmt_0b0 @ 00449c90 ==== 
 * signature: undefined TCustomForm.vmt_0b0(void)
 * body: 00449c90-00449cfd
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomForm_vmt_0b0(int *param_1)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  undefined4 *puStack_8;
  
  pcStack_10 = (code *)&stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (*(char *)((int)param_1 + 0x216) != '\0') goto LAB_00449ce8;
  pcVar1 = (code *)&stack0xfffffffc;
  if (*(char *)((int)param_1 + 0x47) == '\0') {
LAB_00449cc0:
    pcStack_10 = pcVar1;
    FUN_00405808((undefined4 *)PTR_PTR_004ab978,(int *)&puStack_8);
    piVar3 = FUN_0040b5d8((int *)&DAT_0040ea0c,'\x01',puStack_8);
    FUN_004036f4(piVar3);
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x4c))();
    pcVar1 = pcStack_10;
    if (cVar2 == '\0') goto LAB_00449cc0;
  }
  FUN_00448614(param_1);
LAB_00449ce8:
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_00449d05;
  pcStack_14 = (code *)0x449cfd;
  FUN_00403c5c((int *)&puStack_8);
  return;
}


