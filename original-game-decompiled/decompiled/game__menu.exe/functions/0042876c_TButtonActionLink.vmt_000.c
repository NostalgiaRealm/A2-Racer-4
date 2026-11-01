
/* ==== TButtonActionLink.vmt_000 @ 0042876c ==== 
 * signature: undefined TButtonActionLink.vmt_000(void)
 * body: 0042876c-0042878d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TButtonActionLink_vmt_000(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  TWinControlActionLink_vmt_000(param_1,param_2);
  uVar1 = FUN_0040312c(param_2,(int)&PTR_TWinControl_vmt_000_004240f0);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}


