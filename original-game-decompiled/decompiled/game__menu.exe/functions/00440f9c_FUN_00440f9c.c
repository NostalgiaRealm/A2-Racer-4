
/* ==== FUN_00440f9c @ 00440f9c ==== 
 * signature: undefined4 __register FUN_00440f9c(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 00440f9c-00440fe6
 */

undefined4 FUN_00440f9c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  
  if (-1 < *(int *)(param_4 + -4)) {
    iVar3 = *(int *)(param_4 + -4) + 1;
    puVar2 = *(uint **)(param_4 + -8);
    do {
      if ((uint)*(byte *)(param_1 + 0x33) == *puVar2) {
        piVar1 = (int *)(*(int *)(param_4 + 0xc) + (uint)*(byte *)(param_1 + 0x33) * 4);
        *piVar1 = *piVar1 + 1;
        FUN_0043d21c(param_1,*(HMENU *)(param_4 + -0xc),*(byte *)(param_4 + -0xd));
      }
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}


