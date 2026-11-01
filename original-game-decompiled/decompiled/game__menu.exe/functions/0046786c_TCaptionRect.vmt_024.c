
/* ==== TCaptionRect.vmt_024 @ 0046786c ==== 
 * signature: undefined TCaptionRect.vmt_024(void)
 * body: 0046786c-004678a3
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCaptionRect_vmt_024(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  if ((*(int *)(param_1 + 0x10) != *param_2) && (*(int *)(param_1 + 0x14) != iVar1)) {
    *(int *)(param_1 + 0x10) = *param_2;
    *(int *)(param_1 + 0x14) = iVar1;
    FUN_0046792c(param_1);
  }
  return;
}


