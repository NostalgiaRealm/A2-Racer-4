
/* ==== FUN_00441738 @ 00441738 ==== 
 * signature: uint __register FUN_00441738(int param_1)
 * body: 00441738-00441780
 */

uint FUN_00441738(int param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  uint uVar2;
  undefined4 extraout_EDX;
  
  uVar2 = 0;
  if (PTR_DAT_004aba14[9] != '\0') {
    if (*(char *)(param_1 + 0x35) == '\0') {
      uVar2 = (uint)(*(char *)(param_1 + 0x24) == '\x01');
    }
    else {
      piVar1 = FUN_0043c82c((POINT *)(param_1 + 0x48));
      if (piVar1 == (int *)0x0) {
        uVar2 = FUN_0044c4ec(*(int *)PTR_DAT_004ab8ac);
      }
      else {
        uVar2 = FUN_00403178(piVar1,extraout_EDX,extraout_ECX);
      }
    }
  }
  return uVar2;
}


