
/* ==== FUN_00429240 @ 00429240 ==== 
 * signature: int __register FUN_00429240(int param_1)
 * body: 00429240-00429279
 */

int FUN_00429240(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_004291ac(param_1);
  if ((0 < iVar1) && (iVar3 = iVar1 + -1, -1 < iVar3)) {
    do {
      iVar2 = FUN_0040f024(*(undefined4 **)(param_1 + 0x140),iVar3);
      if (*(char *)(iVar2 + 0x47) == '\0') {
        iVar1 = iVar1 + -1;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return iVar1;
}


