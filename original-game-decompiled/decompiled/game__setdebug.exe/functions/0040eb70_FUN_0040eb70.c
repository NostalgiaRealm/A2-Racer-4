
/* ==== FUN_0040eb70 @ 0040eb70 ==== 
 * signature: undefined1 __register FUN_0040eb70(int param_1, int * param_2, int * param_3, int param_4)
 * body: 0040eb70-0040ebb2
 */

undefined1 FUN_0040eb70(int param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  
  if (-1 < param_4) {
    iVar1 = param_4 + 1;
    do {
      if (param_1 == *param_3) {
        FUN_00403a0c(param_2,(undefined4 *)param_3[1]);
        return 1;
      }
      param_3 = param_3 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}


