
/* ==== FUN_0050a360 @ 0050a360 ==== 
 * signature: undefined __fastcall FUN_0050a360(int * param_1)
 * body: 0050a360-0050a3bf
 */

void __fastcall FUN_0050a360(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_004f5a90(*param_1 * 8 + 8);
  *param_1 = *param_1 * 2 + 1;
  iVar3 = 0;
  if (0 < param_1[1]) {
    do {
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar2 + -4 + iVar3 * 4) = *(undefined4 *)(param_1[2] + -4 + iVar3 * 4);
    } while (iVar3 < param_1[1]);
  }
  piVar1 = (int *)param_1[2];
  if ((piVar1 != param_1 + 3) && (piVar1 != (int *)0x0)) {
    FUN_00559d4e(piVar1);
    param_1[2] = 0;
  }
  param_1[2] = iVar2;
  return;
}


