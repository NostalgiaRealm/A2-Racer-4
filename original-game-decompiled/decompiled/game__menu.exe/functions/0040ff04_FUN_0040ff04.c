
/* ==== FUN_0040ff04 @ 0040ff04 ==== 
 * signature: undefined __register FUN_0040ff04(void)
 * body: 0040ff04-0040ff75
 */

void FUN_0040ff04(void)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = FUN_0040655c();
  FUN_00402f9c(*(int **)((int)pvVar2 + 8));
  pvVar2 = FUN_0040655c();
  uVar3 = FUN_00410398(*(undefined4 **)((int)pvVar2 + 0xc));
  pvVar2 = FUN_0040655c();
  *(undefined4 *)((int)pvVar2 + 8) = uVar3;
  pvVar2 = FUN_0040655c();
  iVar1 = *(int *)(*(int *)((int)pvVar2 + 0xc) + 8);
  pvVar2 = FUN_0040655c();
  FUN_00410150(*(int **)((int)pvVar2 + 0xc),iVar1 + -1);
  pvVar2 = FUN_0040655c();
  if (*(int *)(*(int *)((int)pvVar2 + 0xc) + 8) == 0) {
    pvVar2 = FUN_0040655c();
    FUN_0040c968((undefined4 *)((int)pvVar2 + 0xc));
  }
  return;
}


