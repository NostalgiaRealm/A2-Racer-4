
/* ==== FUN_0045b200 @ 0045b200 ==== 
 * signature: undefined4 __register FUN_0045b200(int param_1)
 * body: 0045b200-0045b233
 */

undefined4 FUN_0045b200(int param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (*(int *)(param_1 + 4) == 0) {
    piVar1 = TTimer_vmt_02c((int *)&PTR_TPersistent_vmt_000_0044eddc,'\x01',(int *)0x0);
    *(int **)(param_1 + 4) = piVar1;
    TTimer_set_OnTimer((int)piVar1,extraout_EDX,extraout_ECX,FUN_0045b2d0,param_1);
  }
  return *(undefined4 *)(param_1 + 4);
}


