
/* ==== TCustomForm.vmt_00c @ 004462dc ==== 
 * signature: undefined __register TCustomForm.vmt_00c(int * param_1)
 * body: 004462dc-00446317
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomForm_vmt_00c(int *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  
  TControl_vmt_00c(param_1);
  piVar1 = (int *)param_1[0x82];
  if (piVar1 != (int *)0x0) {
    param_1[0x82] = 0;
    cVar2 = FUN_00403178(piVar1,extraout_EDX,extraout_ECX);
    if (cVar2 != '\0') {
      TForm_set_ActiveControl(param_1,piVar1,extraout_ECX_00);
    }
  }
  return;
}


