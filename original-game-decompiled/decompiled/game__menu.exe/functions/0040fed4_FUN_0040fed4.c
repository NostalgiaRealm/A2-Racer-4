
/* ==== FUN_0040fed4 @ 0040fed4 ==== 
 * signature: undefined __register FUN_0040fed4(void)
 * body: 0040fed4-0040ff02
 */

void FUN_0040fed4(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  pvVar2 = FUN_0040655c();
  puVar1 = *(undefined4 **)((int)pvVar2 + 8);
  iVar4 = puVar1[2];
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    do {
      piVar3 = (int *)FUN_004102b0(puVar1,iVar5);
      (**(code **)(*piVar3 + 0xc))();
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}


