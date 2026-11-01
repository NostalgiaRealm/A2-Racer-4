
/* ==== TCustomEdit.vmt_094 @ 0042698c ==== 
 * signature: undefined TCustomEdit.vmt_094(void)
 * body: 0042698c-004269f9
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomEdit_vmt_094(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint *puVar2;
  uint auStack_98 [35];
  
  if (((PTR_DAT_004aba14[8] == '\0') || (*(int *)PTR_DAT_004aba10 == 2)) ||
     ((*(byte *)((int)param_2 + 5) & 8) == 0)) {
    TWinControl_vmt_094(param_1,param_2);
  }
  else {
    puVar2 = auStack_98;
    for (iVar1 = 0x23; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    auStack_98[1] = auStack_98[1] & 0xfffff7ff;
    TWinControl_vmt_094(param_1,auStack_98);
    if (*(HWND *)(param_1 + 0x14c) != (HWND)0x0) {
      SendMessageA(*(HWND *)(param_1 + 0x14c),0xcf,1,0);
    }
  }
  return;
}


