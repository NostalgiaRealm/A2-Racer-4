
/* ==== FUN_00438468 @ 00438468 ==== 
 * signature: undefined __register FUN_00438468(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 00438468-004384e3
 */

void FUN_00438468(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int extraout_ECX;
  
  if ((((param_1 != *(int *)(param_4 + -4)) &&
       (param_3 = *(int *)(*(int *)(param_4 + -4) + 0x14),
       *(char *)(*(int *)(param_1 + 0x14) + 0x10) == *(char *)(param_3 + 0x10))) &&
      (*(int *)(*(int *)(param_4 + -4) + 0x20) < *(int *)(param_1 + 0x20))) &&
     ((*(int *)(param_1 + 4) == 0 ||
      ((*(int *)(param_1 + 4) != 0 && (*(char *)(*(int *)(param_1 + 4) + 0x47) != '\0')))))) {
    iVar1 = FUN_00438460(*(int *)(param_4 + -8),*(int *)(param_1 + 0x20));
    *(int *)(param_4 + -8) = iVar1;
    param_3 = extraout_ECX;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = param_4;
    FUN_00438468(*(int *)(param_1 + 0xc),param_4,param_3,param_4);
    param_3 = iVar1;
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00438468(*(int *)(param_1 + 8),param_4,param_3,param_4);
  }
  return;
}


