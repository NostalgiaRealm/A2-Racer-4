
/* ==== FUN_00441ec0 @ 00441ec0 ==== 
 * signature: undefined __register FUN_00441ec0(int param_1, int * param_2)
 * body: 00441ec0-00441f07
 */

void FUN_00441ec0(int param_1,int *param_2)

{
  uint uVar1;
  CHAR local_108 [256];
  
  if (*(char *)(param_1 + 0x94) == '\0') {
    FUN_00403a0c(param_2,*(undefined4 **)(param_1 + 0x7c));
  }
  else {
    uVar1 = GetWindowTextA(*(HWND *)(param_1 + 0x24),local_108,0x100);
    FUN_00403aa0(param_2,(undefined4 *)local_108,uVar1);
  }
  return;
}


