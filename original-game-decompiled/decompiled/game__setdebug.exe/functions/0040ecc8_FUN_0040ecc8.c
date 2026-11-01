
/* ==== FUN_0040ecc8 @ 0040ecc8 ==== 
 * signature: undefined __register FUN_0040ecc8(void)
 * body: 0040ecc8-0040ed39
 */

void FUN_0040ecc8(void)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = FUN_00405fa4();
  FUN_00402d14(*(int **)((int)pvVar2 + 8));
  pvVar2 = FUN_00405fa4();
  uVar3 = FUN_0040f10c(*(undefined4 **)((int)pvVar2 + 0xc));
  pvVar2 = FUN_00405fa4();
  *(undefined4 *)((int)pvVar2 + 8) = uVar3;
  pvVar2 = FUN_00405fa4();
  iVar1 = *(int *)(*(int *)((int)pvVar2 + 0xc) + 8);
  pvVar2 = FUN_00405fa4();
  FUN_0040ef14(*(int **)((int)pvVar2 + 0xc),iVar1 + -1);
  pvVar2 = FUN_00405fa4();
  if (*(int *)(*(int *)((int)pvVar2 + 0xc) + 8) == 0) {
    pvVar2 = FUN_00405fa4();
    FUN_0040bc78((undefined4 *)((int)pvVar2 + 0xc));
  }
  return;
}


