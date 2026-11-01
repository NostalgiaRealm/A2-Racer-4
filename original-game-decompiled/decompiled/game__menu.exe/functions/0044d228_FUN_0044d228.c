
/* ==== FUN_0044d228 @ 0044d228 ==== 
 * signature: undefined __register FUN_0044d228(int param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5)
 * body: 0044d228-0044d2a3
 */

void FUN_0044d228(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x94) == '\0') {
    if (*(HWND *)(param_1 + 0x24) != (HWND)0x0) {
      SendMessageA(*(HWND *)(param_1 + 0x24),0xb020,1,(LPARAM)&param_4);
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x98) + 8);
    if (-1 < iVar3 + -1) {
      iVar2 = 0;
      do {
        piVar1 = (int *)FUN_004102b0(*(undefined4 **)(param_1 + 0x98),iVar2);
        if ((*piVar1 == param_4) && (param_5 == piVar1[1])) {
          FUN_00402794((int)piVar1);
          FUN_00410150(*(int **)(param_1 + 0x98),iVar2);
          return;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}


