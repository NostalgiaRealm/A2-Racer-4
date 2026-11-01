
/* ==== FUN_00448314 @ 00448314 ==== 
 * signature: undefined __register FUN_00448314(int * param_1, int param_2, char param_3)
 * body: 00448314-00448358
 */

void FUN_00448314(int *param_1,int param_2,char param_3)

{
  bool bVar1;
  undefined4 extraout_ECX;
  
  if (param_3 != '\0') {
    bVar1 = thunk_FUN_0043156d(param_2,param_1[0x83]);
    if (bVar1) {
      param_1[0x83] = *(int *)(param_2 + 0x24);
    }
  }
  bVar1 = thunk_FUN_0043156d(param_2,param_1[0x82]);
  if (bVar1) {
    TForm_set_ActiveControl(param_1,(int *)0x0,extraout_ECX);
  }
  return;
}


