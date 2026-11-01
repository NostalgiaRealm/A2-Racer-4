
/* ==== FUN_0055466a @ 0055466a ==== 
 * signature: undefined2 * __cdecl FUN_0055466a(char * param_1)
 * body: 0055466a-005546a7
 */

undefined2 * __cdecl FUN_0055466a(char *param_1)

{
  size_t sVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  
  sVar1 = _strlen(param_1);
  iVar4 = sVar1 + 1;
  puVar2 = operator_new(iVar4 * 2);
  puVar5 = puVar2;
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    uVar3 = FUN_0054ef7c((int)*param_1);
    *puVar5 = (short)uVar3;
    puVar5 = puVar5 + 1;
    param_1 = param_1 + 1;
  }
  return puVar2;
}


