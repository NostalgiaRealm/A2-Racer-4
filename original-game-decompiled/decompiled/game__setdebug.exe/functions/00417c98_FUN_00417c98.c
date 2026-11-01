
/* ==== FUN_00417c98 @ 00417c98 ==== 
 * signature: undefined __register FUN_00417c98(int param_1, int * param_2)
 * body: 00417c98-00417d0f
 */

void FUN_00417c98(int param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_2 + -1;
  if (0 < iVar4) {
    iVar3 = 1;
    do {
      puVar1 = (undefined1 *)(param_1 + iVar3 * 4);
      puVar2 = (undefined1 *)(param_1 + iVar3 * 3);
      puVar2[2] = puVar1[2];
      puVar2[1] = puVar1[1];
      *puVar2 = *puVar1;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (*param_2 < 0x100) {
    FUN_00402a2c((undefined4 *)(param_1 + *param_2 * 3),(0x100 - *param_2) * 3,0);
    *param_2 = 0x100;
  }
  return;
}


