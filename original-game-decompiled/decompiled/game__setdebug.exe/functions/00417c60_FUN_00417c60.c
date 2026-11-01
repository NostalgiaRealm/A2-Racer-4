
/* ==== FUN_00417c60 @ 00417c60 ==== 
 * signature: undefined __register FUN_00417c60(int param_1)
 * body: 00417c60-00417c95
 */

void FUN_00417c60(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = 0xff;
  do {
    puVar1 = (undefined1 *)(param_1 + iVar3 * 4);
    puVar2 = (undefined1 *)(param_1 + iVar3 * 3);
    puVar1[2] = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[3] = 0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


