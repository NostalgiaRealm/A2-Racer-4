
/* ==== FUN_004037a4 @ 004037a4 ==== 
 * signature: undefined __register FUN_004037a4(int * param_1)
 * body: 004037a4-004037bf
 */

void FUN_004037a4(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = param_1 + 1;
  do {
    FUN_00405298(*(undefined4 **)piVar2[1],(int *)*piVar2);
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


