
/* ==== FUN_0042c3f8 @ 0042c3f8 ==== 
 * signature: undefined4 __register FUN_0042c3f8(int param_1, char param_2)
 * body: 0042c3f8-0042c460
 */

undefined4 FUN_0042c3f8(int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = param_1;
  while (iVar3 = iVar1, iVar3 != *(int *)(*(int *)(param_1 + 0x1c) + 100)) {
    iVar1 = *(int *)(iVar3 + 0x14);
    if ((param_2 == *(char *)(iVar1 + 0x10)) && (*(int *)(iVar3 + 0x18) != 0)) {
      return *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x20);
    }
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x1c) + 0x14);
  (**(code **)(*piVar2 + 0x40))(piVar2,&uStack_18);
  piVar2 = *(int **)(*(int *)(param_1 + 0x1c) + 0x14);
  (**(code **)(*piVar2 + 0x84))(piVar2,&uStack_18);
  if (param_2 == '\x01') {
    return uStack_14;
  }
  if (param_2 == '\x02') {
    return uStack_18;
  }
  return 0;
}


