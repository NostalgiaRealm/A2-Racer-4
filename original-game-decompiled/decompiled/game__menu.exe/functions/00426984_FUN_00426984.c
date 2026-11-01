
/* ==== FUN_00426984 @ 00426984 ==== 
 * signature: undefined FUN_00426984(void)
 * body: 00426984-0042698b
 */

void FUN_00426984(char *param_1,undefined4 *param_2)

{
  int iVar1;
  uint *puVar2;
  uint auStack_9b [35];
  
  *param_1 = *param_1 + (char)param_1;
  *param_1 = *param_1 + (char)param_1;
  if (((PTR_DAT_004aba14[8] == '\0') || (*(int *)PTR_DAT_004aba10 == 2)) ||
     ((*(byte *)((int)param_2 + 5) & 8) == 0)) {
    TWinControl_vmt_094((int)param_1,param_2);
  }
  else {
    puVar2 = auStack_9b;
    for (iVar1 = 0x23; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    auStack_9b[1] = auStack_9b[1] & 0xfffff7ff;
    TWinControl_vmt_094((int)param_1,auStack_9b);
    if (*(HWND *)(param_1 + 0x14c) != (HWND)0x0) {
      SendMessageA(*(HWND *)(param_1 + 0x14c),0xcf,1,0);
    }
  }
  return;
}


