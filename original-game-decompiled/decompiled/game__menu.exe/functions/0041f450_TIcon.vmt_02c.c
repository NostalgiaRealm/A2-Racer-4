
/* ==== TIcon.vmt_02c @ 0041f450 ==== 
 * signature: undefined TIcon.vmt_02c(void)
 * body: 0041f450-0041f461
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIcon_vmt_02c(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x10) == 0) {
    GetSystemMetrics(0xb);
  }
  return;
}


