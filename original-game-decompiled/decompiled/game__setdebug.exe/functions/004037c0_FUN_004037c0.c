
/* ==== FUN_004037c0 @ 004037c0 ==== 
 * signature: undefined __register FUN_004037c0(int * param_1)
 * body: 004037c0-004037dd
 */

void FUN_004037c0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = param_1 + 1;
  do {
    *(int *)*piVar2 = *(int *)piVar2[1] + piVar2[2];
    piVar2 = piVar2 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


