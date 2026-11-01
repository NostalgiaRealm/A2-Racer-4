
/* ==== TCustomForm.AfterConstruction @ 0043b574 ==== 
 * signature: undefined __register TCustomForm.AfterConstruction(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 0043b574-0043b5a8
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TCustomForm_AfterConstruction(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if ((char)param_1[0x87] == '\0') {
    (**(code **)(*param_1 + 0xc0))();
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  if ((*(byte *)(param_1 + 0xb3) & 0x20) != 0) {
    FUN_00402ef0(param_1,param_2,param_3);
    *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) & 0xdf;
  }
  return;
}


