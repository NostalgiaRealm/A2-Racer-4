
/* ==== FUN_00408208 @ 00408208 ==== 
 * signature: int * __register FUN_00408208(int param_1)
 * body: 00408208-0040821b
 */

int * FUN_00408208(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004026b8(param_1 + 4);
  *piVar1 = param_1 + 4;
  return piVar1 + 1;
}


