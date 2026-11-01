
/* ==== TButtonControl.vmt_06c @ 0041f900 ==== 
 * signature: undefined TButtonControl.vmt_06c(void)
 * body: 0041f900-0041f974
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TButtonControl_vmt_06c(int *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  HWND hWnd;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  
  uVar1 = *param_2;
  if ((uVar1 == 0x201) || (uVar1 == 0x203)) {
    if (((*(byte *)(param_1 + 8) & 0x10) == 0) &&
       (cVar2 = FUN_00402ef0(param_1,param_2,param_3), param_3 = extraout_ECX, cVar2 == '\0')) {
      *(undefined1 *)(param_1 + 0x7c) = 1;
      hWnd = (HWND)FUN_0042a8b4(param_1);
      SetFocus(hWnd);
      *(undefined1 *)(param_1 + 0x7c) = 0;
      cVar2 = FUN_00402ef0(param_1,extraout_EDX,extraout_ECX_00);
      param_3 = extraout_ECX_01;
      if (cVar2 == '\0') {
        return;
      }
    }
  }
  else if ((uVar1 == 0xbd11) && ((char)param_1[0x7c] != '\0')) {
    return;
  }
  TWinControl_vmt_06c(param_1,param_2,param_3);
  return;
}


