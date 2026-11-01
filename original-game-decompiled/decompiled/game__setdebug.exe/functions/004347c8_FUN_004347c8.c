
/* ==== FUN_004347c8 @ 004347c8 ==== 
 * signature: undefined __register FUN_004347c8(int param_1)
 * body: 004347c8-0043480f
 */

void FUN_004347c8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar1 = FUN_00434938(*(int *)(param_1 + 0x58));
    if (-1 < iVar1 + -1) {
      iVar3 = 0;
      do {
        iVar2 = FUN_00434948(*(int *)(param_1 + 0x58),iVar3);
        if (((param_1 != iVar2) && (*(char *)(iVar2 + 0x31) != '\0')) &&
           (*(char *)(iVar2 + 0x33) == *(char *)(param_1 + 0x33))) {
          TMenuItem_set_Checked(iVar2,0);
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}


