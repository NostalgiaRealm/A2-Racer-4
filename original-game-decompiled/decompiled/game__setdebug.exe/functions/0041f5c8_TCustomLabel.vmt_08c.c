
/* ==== TCustomLabel.vmt_08c @ 0041f5c8 ==== 
 * signature: undefined TCustomLabel.vmt_08c(void)
 * body: 0041f5c8-0041f5e1
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomLabel_vmt_08c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((char)param_2 != *(char *)((int)param_1 + 0x12d)) {
    *(char *)((int)param_1 + 0x12d) = (char)param_2;
    FUN_00402ef0(param_1,param_2,param_3);
  }
  return;
}


