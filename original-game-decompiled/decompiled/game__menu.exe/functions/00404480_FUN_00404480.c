
/* ==== FUN_00404480 @ 00404480 ==== 
 * signature: undefined __register FUN_00404480(int param_1, int param_2)
 * body: 00404480-004044a9
 */

void FUN_00404480(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)(param_2 + 10 + (uint)*(byte *)(param_2 + 1));
  iVar3 = *(int *)(param_2 + 6 + (uint)*(byte *)(param_2 + 1));
  do {
    FUN_00404540((undefined4 *)(puVar2[1] + param_1),*(char **)*puVar2);
    puVar2 = puVar2 + 2;
    iVar4 = iVar3 + -1;
    bVar1 = 0 < iVar3;
    iVar3 = iVar4;
  } while (iVar4 != 0 && bVar1);
  return;
}


