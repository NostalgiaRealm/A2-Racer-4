
/* ==== TButtonActionLink.vmt_000 @ 0041f794 ==== 
 * signature: undefined TButtonActionLink.vmt_000(void)
 * body: 0041f794-0041f7b5
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TButtonActionLink_vmt_000(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  TWinControlActionLink_vmt_000(param_1,param_2);
  uVar1 = FUN_00402ea4(param_2,(int)&PTR_TWinControl_vmt_000_0041ea40);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}


