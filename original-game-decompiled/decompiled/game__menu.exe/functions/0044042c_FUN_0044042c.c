
/* ==== FUN_0044042c @ 0044042c ==== 
 * signature: bool __register FUN_0044042c(int param_1)
 * body: 0044042c-00440447
 */

bool FUN_0044042c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0044038c(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x40))();
  }
  return piVar1 != (int *)0x0;
}


