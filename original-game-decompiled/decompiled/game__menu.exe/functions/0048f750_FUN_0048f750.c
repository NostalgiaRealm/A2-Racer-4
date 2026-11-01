
/* ==== FUN_0048f750 @ 0048f750 ==== 
 * signature: undefined FUN_0048f750(void)
 * body: 0048f750-0048f75f
 */

int FUN_0048f750(int param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *unaff_ESI;
  int iVar3;
  int iStack_14;
  
  out(*unaff_ESI,param_2);
  out(unaff_ESI[1],param_2);
  out(*(undefined2 *)(unaff_ESI + 2),param_2);
  iStack_14 = 0;
  if (DAT_004ad490 != (undefined4 *)0x0) {
    iVar2 = DAT_004ad490[2];
    if (SBORROW4(iVar2,1)) {
      thunk_FUN_00402808((uint)DAT_004ad490);
    }
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        iVar1 = FUN_004102b0(DAT_004ad490,iVar3);
        if (param_1 == *(int *)(iVar1 + 4)) {
          iStack_14 = *(int *)(iVar1 + 8);
          break;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  if (iStack_14 == 0) {
    iStack_14 = (**(code **)(param_1 + 0x2c))(param_1,1,*(undefined4 *)PTR_DAT_004ab8ac);
  }
  return iStack_14;
}


