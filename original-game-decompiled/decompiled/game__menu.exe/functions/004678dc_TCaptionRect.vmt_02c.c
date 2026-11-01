
/* ==== TCaptionRect.vmt_02c @ 004678dc ==== 
 * signature: undefined TCaptionRect.vmt_02c(void)
 * body: 004678dc-004678ef
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCaptionRect_vmt_02c(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x10)) {
    *(int *)(param_1 + 0x10) = param_2;
    FUN_0046792c(param_1);
  }
  return;
}


