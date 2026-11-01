
/* ==== FUN_00435d4c @ 00435d4c ==== 
 * signature: bool __register FUN_00435d4c(int param_1)
 * body: 00435d4c-00435d67
 */

bool FUN_00435d4c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00435cac(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x40))();
  }
  return piVar1 != (int *)0x0;
}


