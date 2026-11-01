
/* ==== TDaviSliderNeedle.dyn_ffda @ 0046a83c ==== 
 * signature: undefined TDaviSliderNeedle.dyn_ffda(void)
 * body: 0046a83c-0046a890
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TDaviSliderNeedle_dyn_ffda
               (int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = TControl_dyn_ffda((int)param_1,param_2,param_3,param_4,param_5);
  iVar1 = param_1[0xc];
  if (SCARRY4(param_5,param_1[0xc])) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  param_1[0x91] = param_5 + iVar1;
  iVar1 = param_1[0xd];
  if (SCARRY4(param_4,param_1[0xd])) {
    thunk_FUN_00402808(uVar2);
  }
  param_1[0x92] = param_4 + iVar1;
  FUN_0042e950(param_1,'\x01');
  return;
}


