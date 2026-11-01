
/* ==== FUN_0046fcd4 @ 0046fcd4 ==== 
 * signature: int __register FUN_0046fcd4(int * param_1)
 * body: 0046fcd4-0046fd23
 */

int FUN_0046fcd4(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = FUN_00444864(param_1);
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_00403114(piVar1,(int)&PTR_TWinControl_vmt_000_00442fd4);
    if (((char)uVar2 == '\0') || (*(char *)((int)piVar1 + 0x217) == '\x01')) {
      if (*(int *)(*(int *)PTR_DAT_004ab8ac + 0x38) != 0) {
        iVar3 = *(int *)(*(int *)(*(int *)PTR_DAT_004ab8ac + 0x38) + 0x230);
      }
    }
    else {
      iVar3 = piVar1[0x8c];
    }
  }
  return iVar3;
}


