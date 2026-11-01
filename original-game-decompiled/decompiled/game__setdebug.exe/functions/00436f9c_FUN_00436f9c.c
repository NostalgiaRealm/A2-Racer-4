
/* ==== FUN_00436f9c @ 00436f9c ==== 
 * signature: uint __register FUN_00436f9c(int param_1)
 * body: 00436f9c-00436fe4
 */

uint FUN_00436f9c(int param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  uint uVar2;
  undefined4 extraout_EDX;
  
  uVar2 = 0;
  if (PTR_DAT_00446da0[9] != '\0') {
    if (*(char *)(param_1 + 0x35) == '\0') {
      uVar2 = (uint)(*(char *)(param_1 + 0x24) == '\x01');
    }
    else {
      piVar1 = FUN_0043214c((POINT *)(param_1 + 0x48));
      if (piVar1 == (int *)0x0) {
        uVar2 = FUN_0044154c(*(int *)PTR_DAT_00446c80);
      }
      else {
        uVar2 = FUN_00402ef0(piVar1,extraout_EDX,extraout_ECX);
      }
    }
  }
  return uVar2;
}


