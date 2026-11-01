
/* ==== TCustomDockForm.dyn_b042 @ 0044a75c ==== 
 * signature: undefined TCustomDockForm.dyn_b042(void)
 * body: 0044a75c-0044a830
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomDockForm_dyn_b042(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  uint *puStack_c;
  int *piStack_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  puStack_c = (uint *)0x0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  piStack_8 = param_1;
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if (**(int **)(param_2 + 8) == 0xc) {
    iVar2 = FUN_0042e6a8(*(int *)(param_2 + 4));
    FUN_00403d44((int *)&puStack_c,(undefined4 *)0x0,iVar2 + 1);
    uVar3 = FUN_00403edc((int)puStack_c);
    puVar4 = FUN_004040a0((undefined *)puStack_c);
    FUN_0042e6b8(*(int *)(param_2 + 4),puVar4,uVar3);
    iVar2 = FUN_00403edc((int)puStack_c);
    if (0 < iVar2) {
      iVar5 = 1;
      do {
        cVar1 = *(char *)((int)puStack_c + iVar5 + -1);
        if ((cVar1 == '\n') || (cVar1 == '\r')) {
          FUN_00404210((int *)&puStack_c,iVar5 - 1);
          break;
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    TGroupBox_set_Caption((int)piStack_8,puStack_c);
  }
  else if (**(int **)(param_2 + 8) == 0xb00b) {
    TForm_set_Visible(piStack_8,
                      CONCAT31((int3)((uint)extraout_EDX >> 8),
                               *(undefined1 *)(*(int *)(param_2 + 4) + 0x47)),extraout_ECX);
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0044a838;
  pcStack_18 = (code *)0x44a830;
  FUN_00403c5c((int *)&puStack_c);
  return;
}


