
/* ==== FUN_0043dd68 @ 0043dd68 ==== 
 * signature: undefined __register FUN_0043dd68(int param_1, char param_2)
 * body: 0043dd68-0043de0d
 */

void FUN_0043dd68(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  if ((((((*(byte *)(param_1 + 0x2cc) & 8) == 0) && (*(int *)(DAT_004477c4 + 0x38) != 0)) &&
       (*(int *)(*(int *)(DAT_004477c4 + 0x38) + 0x230) != 0)) &&
      (param_1 != *(int *)(DAT_004477c4 + 0x38))) &&
     ((*(char *)(param_1 + 0x217) == '\x01' ||
      (*(char *)(*(int *)(DAT_004477c4 + 0x38) + 0x217) != '\x02')))) {
    iVar2 = 0;
    if ((((*(byte *)(param_1 + 0x20) & 0x10) == 0) && (*(int *)(param_1 + 0x230) != 0)) &&
       ((*(char *)(*(int *)(param_1 + 0x230) + 0x4c) != '\0' ||
        (*(char *)(param_1 + 0x217) == '\x01')))) {
      iVar2 = *(int *)(param_1 + 0x230);
    }
    iVar1 = *(int *)(*(int *)(DAT_004477c4 + 0x38) + 0x230);
    if (param_2 == '\0') {
      FUN_00436864(iVar1,iVar2);
    }
    else {
      FUN_00436848(iVar1,iVar2);
    }
  }
  return;
}


