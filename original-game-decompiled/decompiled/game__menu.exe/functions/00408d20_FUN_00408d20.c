
/* ==== FUN_00408d20 @ 00408d20 ==== 
 * signature: int * __register FUN_00408d20(int param_1)
 * body: 00408d20-00408d33
 */

int * FUN_00408d20(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0040277c(param_1 + 4);
  *piVar1 = param_1 + 4;
  return piVar1 + 1;
}


