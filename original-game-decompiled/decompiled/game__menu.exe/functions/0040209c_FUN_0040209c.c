
/* ==== FUN_0040209c @ 0040209c ==== 
 * signature: int __register FUN_0040209c(int param_1)
 * body: 0040209c-004020c7
 */

int FUN_0040209c(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 0) {
    param_1 = param_1 + 3;
  }
  iVar2 = param_1 >> 2;
  if (iVar2 < 0x401) {
    do {
      iVar1 = *(int *)(DAT_004ac490 + -0xc + iVar2 * 4);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x401);
  }
  return 0;
}


