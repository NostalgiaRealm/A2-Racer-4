
/* ==== FUN_00455970 @ 00455970 ==== 
 * signature: undefined __register FUN_00455970(int * param_1, int param_2, undefined4 param_3)
 * body: 00455970-00455a00
 */

void FUN_00455970(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(char *)(param_2 + 0x41c) == '\0') {
    FUN_0045566c(param_1,param_2,param_3);
  }
  else {
    FUN_00455154(param_1,*(int *)(param_2 + 0x47c),*(undefined4 *)(param_2 + 0x428),'\0',
                 (char)param_3,(undefined4 *)(param_2 + 0x15),(int *)(param_2 + 0x444),
                 *(int *)(param_2 + 8));
    iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 0x10);
    if (iVar1 == 1) {
      FUN_00455884();
    }
    else if (iVar1 == 2) {
      FUN_00455714();
    }
    else {
      FUN_0045566c(param_1,param_2,param_3);
    }
  }
  return;
}


