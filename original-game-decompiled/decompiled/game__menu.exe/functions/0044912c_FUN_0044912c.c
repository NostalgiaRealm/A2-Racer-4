
/* ==== FUN_0044912c @ 0044912c ==== 
 * signature: int __register FUN_0044912c(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 0044912c-00449168
 */

int FUN_0044912c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = FUN_004403bc(param_1,*(int *)(*(int *)(*(int *)(param_4 + -4) + 8) + 8),'\x01');
    if (iVar1 == 0) {
      iVar1 = FUN_004403bc(param_1,*(int *)(*(int *)(*(int *)(param_4 + -4) + 8) + 0xc),'\0');
    }
  }
  return iVar1;
}


