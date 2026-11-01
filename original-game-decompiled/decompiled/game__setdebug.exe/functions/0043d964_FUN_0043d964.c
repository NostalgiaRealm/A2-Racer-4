
/* ==== FUN_0043d964 @ 0043d964 ==== 
 * signature: undefined __register FUN_0043d964(int * param_1, int param_2, char param_3)
 * body: 0043d964-0043d9a8
 */

void FUN_0043d964(int *param_1,int param_2,char param_3)

{
  bool bVar1;
  undefined4 extraout_ECX;
  
  if (param_3 != '\0') {
    bVar1 = thunk_FUN_004275cd(param_2,param_1[0x83]);
    if (bVar1) {
      param_1[0x83] = *(int *)(param_2 + 0x24);
    }
  }
  bVar1 = thunk_FUN_004275cd(param_2,param_1[0x82]);
  if (bVar1) {
    TForm_set_ActiveControl(param_1,(int *)0x0,extraout_ECX);
  }
  return;
}


