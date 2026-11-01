
/* ==== FUN_0044da48 @ 0044da48 ==== 
 * signature: undefined __register FUN_0044da48(undefined4 param_1, uint param_2)
 * body: 0044da48-0044da80
 */

void FUN_0044da48(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_0044b180(DAT_004ac7d8);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      uVar4 = 0;
      iVar2 = FUN_0044b16c(DAT_004ac7d8,iVar3);
      FUN_0042f720(iVar2,param_2 & 0xffff,0,uVar4);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


