
/* ==== FUN_00438be8 @ 00438be8 ==== 
 * signature: undefined __register FUN_00438be8(int param_1, int param_2)
 * body: 00438be8-00438c48
 */

void FUN_00438be8(int param_1,int param_2)

{
  LRESULT LVar1;
  LRESULT extraout_ECX;
  undefined4 extraout_EDX;
  
  if (param_2 == 0) {
    FUN_00438b4c(param_1);
    if (*(char *)(param_1 + 0xd) != '\0') {
      FUN_00438b68(param_1);
      return;
    }
    FUN_00438b98(param_1,extraout_EDX,extraout_ECX);
  }
  else if ((param_2 == 0x68) && (*(char *)(param_1 + 0x20) != '\0')) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      LVar1 = SendMessageA(*(HWND *)(param_1 + 0x18),*(UINT *)(param_1 + 0x14),0,0);
      *(LRESULT *)(param_1 + 0x10) = LVar1;
    }
    else {
      SystemParametersInfoA(0x68,0,(PVOID)(param_1 + 0x10),0);
    }
  }
  return;
}


