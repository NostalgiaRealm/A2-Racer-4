
/* ==== FUN_00444a24 @ 00444a24 ==== 
 * signature: undefined __register FUN_00444a24(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 00444a24-00444a86
 */

void FUN_00444a24(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x47) != '\0') {
    cVar1 = *(char *)(param_1 + 0x4b);
    if ((cVar1 == '\0') || (cVar1 == '\x03')) {
      if ((*(char *)(param_1 + 0x4b) == '\x03') || ((*(byte *)(param_1 + 0x51) & 5) == 1)) {
        iVar2 = FUN_00420cb4(*(int *)(param_4 + -4),
                             *(int *)(*(int *)(param_4 + -8) + 0xc) + *(int *)(param_1 + 0x30) +
                             *(int *)(param_1 + 0x38));
        *(int *)(param_4 + -4) = iVar2;
      }
    }
    else if (cVar1 == '\x04') {
      *(int *)(param_4 + -0xc) = *(int *)(param_4 + -0xc) + *(int *)(param_1 + 0x38);
    }
  }
  return;
}


