
/* ==== TWinControlWrapper.vmt_06c @ 00465a6c ==== 
 * signature: undefined __register TWinControlWrapper.vmt_06c(int * param_1, uint * param_2, undefined4 param_3)
 * body: 00465a6c-00465aa1
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControlWrapper_vmt_06c(int *param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  if (*param_2 == 0x201) {
    cVar1 = (**(code **)(*param_1 + 0xac))();
    param_3 = extraout_ECX;
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0xb4))();
      param_3 = extraout_ECX_00;
    }
  }
  TControl_vmt_06c(param_1,param_2,param_3);
  return;
}


