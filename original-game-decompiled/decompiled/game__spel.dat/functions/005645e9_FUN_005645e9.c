
/* ==== FUN_005645e9 @ 005645e9 ==== 
 * signature: undefined4 __stdcall FUN_005645e9(void)
 * body: 005645e9-005646b3
 */

undefined4 FUN_005645e9(void)

{
  int *piVar1;
  uint uVar2;
  
  if (DAT_0074dce8 == 0) {
    PTR_DAT_005c7e90 = *(undefined **)PTR_PTR_005c7ec0;
    PTR_DAT_005c7e94 = *(undefined **)(PTR_PTR_005c7ec0 + 4);
    PTR_DAT_005c7e98 = *(undefined **)(PTR_PTR_005c7ec0 + 8);
    PTR_PTR_005c7ec0 = (undefined *)&PTR_DAT_005c7e90;
    FUN_0056480d((int)DAT_0074df84);
    FUN_00559d4e(DAT_0074df84);
    DAT_0074df84 = (int *)0x0;
    return 0;
  }
  piVar1 = FUN_0055ab88(1,0x30);
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_005646b4((int)piVar1);
    if (uVar2 == 0) {
      *piVar1 = *(int *)PTR_PTR_005c7ec0;
      piVar1[1] = *(int *)(PTR_PTR_005c7ec0 + 4);
      piVar1[2] = *(int *)(PTR_PTR_005c7ec0 + 8);
      PTR_PTR_005c7ec0 = (undefined *)piVar1;
      FUN_0056480d((int)DAT_0074df84);
      FUN_00559d4e(DAT_0074df84);
      DAT_0074df84 = piVar1;
      return 0;
    }
    FUN_0056480d((int)piVar1);
    FUN_00559d4e(piVar1);
  }
  return 1;
}


