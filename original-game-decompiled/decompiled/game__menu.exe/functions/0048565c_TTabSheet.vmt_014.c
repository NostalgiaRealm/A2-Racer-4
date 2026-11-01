
/* ==== TTabSheet.vmt_014 @ 0048565c ==== 
 * signature: undefined __register TTabSheet.vmt_014(int * param_1, int * param_2)
 * body: 0048565c-0048568c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TTabSheet_vmt_014(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  TWinControl_vmt_014(param_1,param_2);
  piVar1 = (int *)param_2[0xb];
  uVar2 = FUN_00403114(piVar1,(int)&PTR_TWinControl_vmt_000_00483810);
  if ((char)uVar2 != '\0') {
    FUN_004856b8(param_1,piVar1);
  }
  return;
}


