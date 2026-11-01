
/* ==== TPageControl.dyn_b042 @ 004862cc ==== 
 * signature: undefined TPageControl.dyn_b042(void)
 * body: 004862cc-0048638c
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TPageControl_dyn_b042(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined1 *puStack_1c;
  int iStack_c;
  uint *puStack_8;
  
  puStack_1c = &stack0xfffffffc;
  puStack_8 = (uint *)0x0;
  puStack_20 = &UNK_0048638d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar2 = FUN_00485d98((int)param_1,*(int *)(param_2 + 4));
  if (iVar2 != 0) {
    if (**(int **)(param_2 + 8) == 0xc) {
      FUN_00403e14((int *)&puStack_8,*(char **)(*(int *)(param_2 + 8) + 8));
      iStack_c = FUN_00403edc((int)puStack_8);
      if (0 < iStack_c) {
        iVar3 = 1;
        do {
          cVar1 = *(char *)((int)puStack_8 + iVar3 + -1);
          if ((cVar1 == '\n') || (cVar1 == '\r')) {
            FUN_00404210((int *)&puStack_8,iVar3 - 1);
            break;
          }
          iVar3 = iVar3 + 1;
          iStack_c = iStack_c + -1;
        } while (iStack_c != 0);
      }
      TGroupBox_set_Caption(iVar2,puStack_8);
    }
    else if (**(int **)(param_2 + 8) == 0xb00b) {
      TTabSheet_set_TabVisible(iVar2,*(undefined4 *)(*(int *)(param_2 + 8) + 4));
    }
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &UNK_00486394;
  puStack_20 = (undefined *)0x48638c;
  FUN_00403c5c((int *)&puStack_8);
  return;
}


