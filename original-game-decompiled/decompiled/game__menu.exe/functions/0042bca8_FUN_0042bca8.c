
/* ==== FUN_0042bca8 @ 0042bca8 ==== 
 * signature: undefined1 __register FUN_0042bca8(undefined4 * param_1, int param_2, int * param_3)
 * body: 0042bca8-0042bcd8
 */

undefined1 FUN_0042bca8(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  *param_3 = 0;
  while( true ) {
    if ((int)param_1[2] <= *param_3) {
      return 0;
    }
    iVar1 = FUN_004102b0(param_1,*param_3);
    if (param_2 == *(int *)(iVar1 + 4)) break;
    *param_3 = *param_3 + 1;
  }
  return 1;
}


