
/* ==== TWinControlActionLink.vmt_000 @ 00430848 ==== 
 * signature: undefined __register TWinControlActionLink.vmt_000(int param_1, int * param_2)
 * body: 00430848-00430869
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControlActionLink_vmt_000(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  TControlActionLink_vmt_000(param_1,param_2);
  uVar1 = FUN_0040312c(param_2,(int)&PTR_TWinControl_vmt_000_0042ac0c);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}


