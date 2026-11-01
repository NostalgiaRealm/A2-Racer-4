
/* ==== FUN_00403a68 @ 00403a68 ==== 
 * signature: undefined __register FUN_00403a68(int * param_1)
 * body: 00403a68-00403a81
 */

void FUN_00403a68(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = param_1 + 1;
  do {
    FUN_004042f0((BSTR *)*piVar2,(OLECHAR *)piVar2[1]);
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


