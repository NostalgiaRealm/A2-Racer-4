
/* ==== FUN_0043ca78 @ 0043ca78 ==== 
 * signature: int __register FUN_0043ca78(int param_1)
 * body: 0043ca78-0043cac2
 */

int FUN_0043ca78(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((*(char *)(param_1 + 0x217) == '\x02') && (*(int *)(param_1 + 0x23c) != 0)) {
    iVar1 = FUN_004401f8(DAT_004477c8);
    if (-1 < iVar1 + -1) {
      iVar3 = 0;
      do {
        iVar2 = FUN_004401e4(DAT_004477c8,iVar3);
        if (*(char *)(iVar2 + 0x217) == '\x01') {
          iVar4 = iVar4 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return iVar4;
}


