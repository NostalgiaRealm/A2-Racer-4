
/* ==== FUN_0040f1c0 @ 0040f1c0 ==== 
 * signature: undefined __register FUN_0040f1c0(int * param_1, int param_2)
 * body: 0040f1c0-0040f22f
 */

void FUN_0040f1c0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 < 0) || (0x7ffffff < param_2)) {
    FUN_0040efb0(*param_1,(undefined4 *)PTR_PTR_00446bd0,param_2);
  }
  if (param_1[3] < param_2) {
    FUN_0040f184(param_1,param_2);
  }
  iVar1 = param_1[2];
  if (iVar1 < param_2) {
    FUN_00402a2c((undefined4 *)(param_1[1] + iVar1 * 4),(param_2 - iVar1) * 4,0);
  }
  else {
    iVar1 = iVar1 + -1;
    if (param_2 - iVar1 == 0 || param_2 < iVar1) {
      iVar2 = (param_2 - iVar1) + -1;
      do {
        FUN_0040ef14(param_1,iVar1);
        iVar1 = iVar1 + -1;
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0);
    }
  }
  param_1[2] = param_2;
  return;
}


