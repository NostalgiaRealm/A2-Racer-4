
/* ==== FUN_00413c68 @ 00413c68 ==== 
 * signature: undefined __register FUN_00413c68(int param_1)
 * body: 00413c68-00413ca0
 */

void FUN_00413c68(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0x20) & 8) == 0) {
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 8;
    if ((*(int *)(param_1 + 0x10) != 0) &&
       (iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 8), -1 < iVar2 + -1)) {
      iVar3 = 0;
      do {
        iVar1 = FUN_0040f024(*(undefined4 **)(param_1 + 0x10),iVar3);
        FUN_00413c68(iVar1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}


