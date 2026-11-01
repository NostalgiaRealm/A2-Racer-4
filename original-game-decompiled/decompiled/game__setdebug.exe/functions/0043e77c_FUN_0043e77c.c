
/* ==== FUN_0043e77c @ 0043e77c ==== 
 * signature: int __register FUN_0043e77c(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 0043e77c-0043e7b8
 */

int FUN_0043e77c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = FUN_00435cdc(param_1,*(int *)(*(int *)(*(int *)(param_4 + -4) + 8) + 8),'\x01');
    if (iVar1 == 0) {
      iVar1 = FUN_00435cdc(param_1,*(int *)(*(int *)(*(int *)(param_4 + -4) + 8) + 0xc),'\0');
    }
  }
  return iVar1;
}


