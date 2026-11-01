
/* ==== TCollectionItem.vmt_010 @ 00410cf8 ==== 
 * signature: undefined TCollectionItem.vmt_010(void)
 * body: 00410cf8-00410d26
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCollectionItem_vmt_010(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00410bd0(param_1);
  if ((-1 < iVar1) && (param_2 != iVar1)) {
    FUN_004103a4(*(int **)(*(int *)(param_1 + 4) + 8),iVar1,param_2);
    FUN_00410bac(param_1,'\x01');
  }
  return;
}


