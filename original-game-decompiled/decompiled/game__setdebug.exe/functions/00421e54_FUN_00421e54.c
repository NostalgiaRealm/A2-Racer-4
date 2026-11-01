
/* ==== FUN_00421e54 @ 00421e54 ==== 
 * signature: int __register FUN_00421e54(undefined4 * param_1, undefined4 param_2, int param_3)
 * body: 00421e54-00421eb6
 */

int FUN_00421e54(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  HWND pHVar3;
  int iVar4;
  int local_10;
  
  iVar4 = 0;
  if (param_1[2] != 0) {
    local_10 = param_3;
    if (param_1[2] == 1) {
      piVar2 = (int *)FUN_0040f024(param_1,0);
      iVar4 = *piVar2;
    }
    else {
      pHVar3 = GetDesktopWindow();
      pHVar3 = GetTopWindow(pHVar3);
      while ((iVar4 == 0 && (pHVar3 != (HWND)0x0))) {
        cVar1 = FUN_00421d68(param_1,(int)pHVar3,&local_10);
        if (cVar1 == '\0') {
          pHVar3 = GetWindow(pHVar3,2);
        }
        else {
          iVar4 = **(int **)(param_1[1] + local_10 * 4);
        }
      }
    }
  }
  return iVar4;
}


