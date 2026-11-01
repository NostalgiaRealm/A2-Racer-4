
/* ==== TCustomForm.dyn_ffed @ 0044677c ==== 
 * signature: undefined TCustomForm.dyn_ffed(void)
 * body: 0044677c-004467f8
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_ffed(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int nNumber;
  int nNumber_00;
  int iVar3;
  int nDenominator;
  
  FUN_004459ac((int)param_1,param_2,param_3);
  FUN_004344f8((int)param_1,param_2,param_3);
  cVar2 = FUN_00446858(param_1);
  if (cVar2 != '\0') {
    nNumber = TForm_get_ClientHeight(param_1);
    iVar3 = param_2;
    nDenominator = param_3;
    nNumber_00 = TForm_get_ClientWidth(param_1);
    iVar3 = MulDiv(nNumber_00,iVar3,nDenominator);
    TForm_set_ClientWidth(param_1,iVar3);
    iVar3 = MulDiv(nNumber,param_2,param_3);
    TForm_set_ClientHeight(param_1,iVar3);
  }
  piVar1 = (int *)param_1[0x16];
  iVar3 = TFont_get_Size((int)piVar1);
  iVar3 = MulDiv(iVar3,param_2,param_3);
  TFont_set_Size(piVar1,iVar3);
  return;
}


