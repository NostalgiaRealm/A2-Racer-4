
/* ==== FUN_00401420 @ 00401420 ==== 
 * signature: undefined __register FUN_00401420(int * param_1)
 * body: 00401420-00401437
 */

void FUN_00401420(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[1];
  iVar2 = *param_1;
  *piVar1 = iVar2;
  *(int **)(iVar2 + 4) = piVar1;
  *param_1 = (int)DAT_0044744c;
  DAT_0044744c = param_1;
  return;
}


