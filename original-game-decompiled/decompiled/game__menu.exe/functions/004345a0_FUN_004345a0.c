
/* ==== FUN_004345a0 @ 004345a0 ==== 
 * signature: undefined __register FUN_004345a0(int * param_1, int param_2, int param_3)
 * body: 004345a0-00434677
 */

void FUN_004345a0(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  
  if ((HWND)param_1[0x53] != (HWND)0x0) {
    BVar2 = IsWindowVisible((HWND)param_1[0x53]);
    if (BVar2 != 0) {
      bVar1 = true;
      goto LAB_004345ca;
    }
  }
  bVar1 = false;
LAB_004345ca:
  if (bVar1) {
    ScrollWindow((HWND)param_1[0x53],param_2,param_3,(RECT *)0x0,(RECT *)0x0);
  }
  iVar3 = FUN_004317bc((int)param_1);
  if (-1 < iVar3 + -1) {
    iVar6 = 0;
    do {
      piVar4 = (int *)FUN_00431780((int)param_1,iVar6);
      uVar5 = FUN_00403114(piVar4,(int)&PTR_TWinControl_vmt_000_0042ac0c);
      if (((char)uVar5 == '\0') || (piVar4[0x53] == 0)) {
        piVar4[0xc] = piVar4[0xc] + param_2;
        piVar4[0xd] = piVar4[0xd] + param_3;
      }
      else if (!bVar1) {
        SetWindowPos((HWND)piVar4[0x53],(HWND)0x0,piVar4[0xc] + param_2,piVar4[0xd] + param_3,
                     piVar4[0xe],piVar4[0xf],0x14);
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0043134c(param_1);
  return;
}


