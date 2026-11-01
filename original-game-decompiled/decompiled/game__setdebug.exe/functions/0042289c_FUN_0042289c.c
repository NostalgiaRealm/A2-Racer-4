
/* ==== FUN_0042289c @ 0042289c ==== 
 * signature: undefined4 __register FUN_0042289c(void)
 * body: 0042289c-0042292e
 */

undefined4 FUN_0042289c(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  piVar1 = *(int **)(DAT_00447750 + 4);
  if ((((piVar1 != (int *)0x0) && ((char)piVar1[0x5f] != '\0')) && (piVar1[0x50] != 0)) &&
     (iVar2 = FUN_004291ac((int)piVar1), iVar2 != 0)) {
    iVar2 = FUN_004291ac((int)piVar1);
    if ((iVar2 == 1) &&
       (iVar2 = FUN_0040f024((undefined4 *)piVar1[0x50],0), iVar2 == *(int *)(DAT_00447750 + 0x38)))
    {
      return 0;
    }
    piVar3 = FUN_00423258((POINT *)(DAT_00447750 + 0xc),0);
    while( true ) {
      if (piVar3 == (int *)0x0) {
        return 0;
      }
      if (piVar1 == piVar3) {
        return 0;
      }
      iVar2 = FUN_0040f080(piVar1[0x50],(int)piVar3);
      if (iVar2 != -1) break;
      piVar3 = (int *)piVar3[9];
    }
    uVar4 = FUN_004291c0((int)piVar1,iVar2);
  }
  return uVar4;
}


