
/* ==== TCaptionRect.vmt_030 @ 004678f0 ==== 
 * signature: undefined TCaptionRect.vmt_030(void)
 * body: 004678f0-00467903
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCaptionRect_vmt_030(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = param_2;
    FUN_0046792c(param_1);
  }
  return;
}


