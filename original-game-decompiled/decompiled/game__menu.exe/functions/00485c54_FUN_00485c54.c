
/* ==== FUN_00485c54 @ 00485c54 ==== 
 * signature: int __register FUN_00485c54(int param_1, int param_2, char param_3, char param_4)
 * body: 00485c54-00485cdb
 */

int FUN_00485c54(int param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(*(int *)(param_1 + 0x240) + 8) != 0) {
    iVar1 = FUN_0041030c(*(int *)(param_1 + 0x240),param_2);
    iVar3 = iVar1;
    if (iVar1 == -1) {
      if (param_3 == '\0') {
        iVar1 = 0;
        iVar3 = iVar1;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x240) + 8) + -1;
        iVar3 = iVar1;
      }
    }
    do {
      if (param_3 == '\0') {
        if (iVar1 == 0) {
          iVar1 = *(int *)(*(int *)(param_1 + 0x240) + 8);
        }
        iVar1 = iVar1 + -1;
      }
      else {
        iVar1 = iVar1 + 1;
        if (iVar1 == *(int *)(*(int *)(param_1 + 0x240) + 8)) {
          iVar1 = 0;
        }
      }
      iVar2 = FUN_004102b0(*(undefined4 **)(param_1 + 0x240),iVar1);
      if (param_4 == '\0') {
        return iVar2;
      }
      if (*(char *)(iVar2 + 0x1f8) != '\0') {
        return iVar2;
      }
    } while (iVar3 != iVar1);
  }
  return 0;
}


