
/* ==== TCustomDockForm.dyn_ffcc @ 0044a4c4 ==== 
 * signature: undefined __register TCustomDockForm.dyn_ffcc(int * param_1, int * param_2, undefined4 param_3)
 * body: 0044a4c4-0044a59c
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomDockForm_dyn_ffcc(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  uint *local_10;
  undefined4 local_c;
  int *local_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  local_10 = (uint *)0x0;
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = param_3;
  local_8 = param_2;
  iVar2 = FUN_004332a0((int)param_1);
  if (iVar2 == 1) {
    iVar2 = FUN_0042e6a8((int)local_8);
    FUN_00403d44((int *)&local_10,(undefined4 *)0x0,iVar2 + 1);
    uVar3 = FUN_00403edc((int)local_10);
    puVar4 = FUN_004040a0((undefined *)local_10);
    FUN_0042e6b8((int)local_8,puVar4,uVar3);
    iVar2 = FUN_00403edc((int)local_10);
    if (0 < iVar2) {
      iVar5 = 1;
      do {
        cVar1 = *(char *)((int)local_10 + iVar5 + -1);
        if ((cVar1 == '\n') || (cVar1 == '\r')) {
          FUN_00404210((int *)&local_10,iVar5 - 1);
          break;
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    TGroupBox_set_Caption((int)param_1,local_10);
  }
  TWinControl_dyn_ffcc(param_1,local_8);
  TGroupBox_set_Align(local_8,CONCAT31((int3)((uint)extraout_EDX >> 8),5),extraout_ECX);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    TForm_set_Visible(param_1,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),1),extraout_ECX_00);
  }
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_0044a5a4;
  pcStack_20 = (code *)0x44a59c;
  FUN_00403c5c((int *)&local_10);
  return;
}


