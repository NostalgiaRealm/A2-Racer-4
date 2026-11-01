
/* ==== FUN_0041581c @ 0041581c ==== 
 * signature: undefined __register FUN_0041581c(int param_1)
 * body: 0041581c-00415854
 */

void FUN_0041581c(int param_1)

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
        iVar1 = FUN_004102b0(*(undefined4 **)(param_1 + 0x10),iVar3);
        FUN_0041581c(iVar1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}


