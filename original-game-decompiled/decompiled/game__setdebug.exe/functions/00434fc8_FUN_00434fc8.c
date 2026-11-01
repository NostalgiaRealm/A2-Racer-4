
/* ==== FUN_00434fc8 @ 00434fc8 ==== 
 * signature: undefined FUN_00434fc8(void)
 * body: 00434fc8-00434fec
 */

void FUN_00434fc8(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = TMenuItem_get_Action((int)param_1);
  if (param_2 == iVar1) {
    FUN_00402ef0(param_1,param_2,0);
  }
  return;
}


