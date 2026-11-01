
/* ==== FUN_0044fc4c @ 0044fc4c ==== 
 * signature: undefined4 __register FUN_0044fc4c(int * param_1)
 * body: 0044fc4c-0044fce2
 */

undefined4 FUN_0044fc4c(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  HWND hWnd;
  undefined4 uVar5;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  uVar5 = 0;
  piVar1 = *(int **)(param_1[0x4a] + 4);
  if ((((*(char *)((int)param_1 + 0x47) != '\0') && ((*(byte *)(param_1 + 8) & 1) == 0)) &&
      (piVar1 != (int *)0x0)) && (*(char *)((int)piVar1 + 0x1a) != '\0')) {
    iVar3 = (**(code **)(*piVar1 + 0x24))();
    if (iVar3 == 0) {
      *(undefined1 *)((int)piVar1 + 0x1a) = 0;
    }
    else {
      piVar4 = FUN_00444864(param_1);
      if ((piVar4 != (int *)0x0) && (*(char *)((int)piVar4 + 0x216) != '\0')) {
        bVar2 = FUN_00434cdc((int)piVar4);
        if (bVar2) {
          if ((char)param_1[0x4f] == '\0') {
            lParam = 0;
            wParam = 0;
            Msg = 0x30f;
            hWnd = (HWND)FUN_004349e0(piVar4);
            PostMessageA(hWnd,Msg,wParam,lParam);
          }
          else {
            FUN_0042f720((int)piVar4,0x30f,0,0);
          }
          uVar5 = 1;
          *(undefined1 *)((int)piVar1 + 0x1a) = 0;
        }
      }
    }
  }
  return uVar5;
}


