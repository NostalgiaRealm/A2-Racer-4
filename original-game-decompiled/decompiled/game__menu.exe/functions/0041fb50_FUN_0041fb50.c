
/* ==== FUN_0041fb50 @ 0041fb50 ==== 
 * signature: undefined4 __register FUN_0041fb50(uint param_1, uint param_2)
 * body: 0041fb50-0041fb85
 */

undefined4 FUN_0041fb50(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_004ac6ac != 0) {
    uVar1 = FUN_00417d54(param_2);
    iVar2 = FUN_00417d54(param_1);
    iVar2 = FUN_0041f924(DAT_004ac6ac,iVar2,uVar1);
    return *(undefined4 *)(iVar2 + 4);
  }
  return 0;
}


