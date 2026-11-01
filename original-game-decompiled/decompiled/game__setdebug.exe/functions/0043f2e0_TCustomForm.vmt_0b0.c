
/* ==== TCustomForm.vmt_0b0 @ 0043f2e0 ==== 
 * signature: undefined TCustomForm.vmt_0b0(void)
 * body: 0043f2e0-0043f34d
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
  pcStack_14 = thunk_FUN_00403434;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (*(char *)((int)param_1 + 0x216) != '\0') goto LAB_0043f338;
  pcVar1 = (code *)&stack0xfffffffc;
  if (*(char *)((int)param_1 + 0x47) == '\0') {
LAB_0043f310:
    pcStack_10 = pcVar1;
    FUN_00405298((undefined4 *)PTR_PTR_00446d14,(int *)&puStack_8);
    piVar3 = FUN_0040a938((int *)&DAT_0040d94c,'\x01',puStack_8);
    FUN_0040346c(piVar3);
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x4c))();
    pcVar1 = pcStack_10;
    if (cVar2 == '\0') goto LAB_0043f310;
  }
  FUN_0043dc64(param_1);
LAB_0043f338:
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0043f355;
  pcStack_14 = (code *)0x43f34d;
  FUN_004039b8((int *)&puStack_8);
  return;
}


