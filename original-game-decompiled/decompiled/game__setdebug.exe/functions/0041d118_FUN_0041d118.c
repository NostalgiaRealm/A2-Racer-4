
/* ==== FUN_0041d118 @ 0041d118 ==== 
 * signature: undefined4 __register FUN_0041d118(uint param_1, uint param_2)
 * body: 0041d118-0041d14d
 */

undefined4 FUN_0041d118(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_004476a4 != 0) {
    uVar1 = FUN_004160cc(param_2);
    iVar2 = FUN_004160cc(param_1);
    iVar2 = FUN_0041ceec(DAT_004476a4,iVar2,uVar1);
    return *(undefined4 *)(iVar2 + 4);
  }
  return 0;
}


