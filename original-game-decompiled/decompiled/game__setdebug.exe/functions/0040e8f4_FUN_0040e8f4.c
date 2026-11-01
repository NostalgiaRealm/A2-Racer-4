
/* ==== FUN_0040e8f4 @ 0040e8f4 ==== 
 * signature: undefined __register FUN_0040e8f4(undefined4 param_1, int param_2)
 * body: 0040e8f4-0040e927
 */

void FUN_0040e8f4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  for (iVar1 = param_2; -1 < iVar1; iVar1 = iVar1 + -1) {
  }
  puVar2 = (undefined4 *)&stack0xfffffff4;
  if (-1 < param_2) {
    iVar1 = param_2 + 1;
    do {
      FUN_0040e7f8((undefined **)*puVar2);
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


