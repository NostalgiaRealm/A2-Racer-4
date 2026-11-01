
/* ==== FUN_004428bc @ 004428bc ==== 
 * signature: undefined __register FUN_004428bc(undefined4 param_1, uint param_2)
 * body: 004428bc-004428f4
 */

void FUN_004428bc(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_004401f8(DAT_004477c8);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      uVar4 = 0;
      iVar2 = FUN_004401e4(DAT_004477c8,iVar3);
      FUN_00425780(iVar2,param_2 & 0xffff,0,uVar4);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


