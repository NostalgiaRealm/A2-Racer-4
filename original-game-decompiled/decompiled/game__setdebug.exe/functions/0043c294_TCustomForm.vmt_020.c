
/* ==== TCustomForm.vmt_020 @ 0043c294 ==== 
 * signature: undefined TCustomForm.vmt_020(void)
 * body: 0043c294-0043c2d1
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomForm_vmt_020(int param_1,int param_2,char *param_3,char *param_4)

{
  TComponent_vmt_020(param_1,param_2,param_3,param_4);
  if (*(int *)(param_1 + 0x238) != 0) {
    (**(code **)(**(int **)(param_1 + 0x238) + 0x2c))
              (*(int **)(param_1 + 0x238),param_2,param_3,param_4);
  }
  return;
}


