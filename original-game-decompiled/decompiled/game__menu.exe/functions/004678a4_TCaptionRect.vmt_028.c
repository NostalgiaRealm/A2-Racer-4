
/* ==== TCaptionRect.vmt_028 @ 004678a4 ==== 
 * signature: undefined TCaptionRect.vmt_028(void)
 * body: 004678a4-004678db
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCaptionRect_vmt_028(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  if ((*(int *)(param_1 + 0x18) != *param_2) && (*(int *)(param_1 + 0x1c) != iVar1)) {
    *(int *)(param_1 + 0x18) = *param_2;
    *(int *)(param_1 + 0x1c) = iVar1;
    FUN_0046792c(param_1);
  }
  return;
}


