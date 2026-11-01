
/* ==== TAgent.vmt_0b4 @ 00472818 ==== 
 * signature: undefined TAgent.vmt_0b4(void)
 * body: 00472818-00472838
 * note: Name source: Delphi VMT slot
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi VMT slot */

void TAgent_vmt_0b4(uint param_1)

{
  int iVar1;
  int extraout_EDX;
  
  *(undefined **)(param_1 + 0x1f0) = &DAT_004ab130;
  iVar1 = (param_1 + 600) - param_1;
  if (param_1 + 600 < param_1) {
    thunk_FUN_00402808(param_1);
    iVar1 = extraout_EDX;
  }
  _DAT_004ab180 = iVar1;
  return;
}


