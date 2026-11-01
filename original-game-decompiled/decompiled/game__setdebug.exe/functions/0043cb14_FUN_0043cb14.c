
/* ==== FUN_0043cb14 @ 0043cb14 ==== 
 * signature: undefined4 __register FUN_0043cb14(int * param_1)
 * body: 0043cb14-0043cb70
 */

undefined4 FUN_0043cb14(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  FUN_0042a8b4(param_1);
  iVar1 = (**(code **)PTR_DAT_00446bf0)();
  iVar2 = FUN_004401c8(DAT_004477c8);
  if (-1 < iVar2 + -1) {
    iVar5 = 0;
    do {
      iVar3 = FUN_004401b4(DAT_004477c8,iVar5);
      if (iVar1 == *(int *)(iVar3 + 4)) {
        uVar4 = FUN_004401b4(DAT_004477c8,iVar5);
        return uVar4;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}


