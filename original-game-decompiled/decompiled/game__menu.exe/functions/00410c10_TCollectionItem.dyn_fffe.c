
/* ==== TCollectionItem.dyn_fffe @ 00410c10 ==== 
 * signature: undefined __register TCollectionItem.dyn_fffe(int * param_1, int * param_2)
 * body: 00410c10-00410ca4
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCollectionItem_dyn_fffe(int *param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_130;
  code *pcStack_12c;
  code *pcStack_128;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined1 local_10;
  int local_c;
  undefined1 local_8;
  
  pcStack_128 = (code *)&stack0xfffffffc;
  local_18 = 0;
  pcStack_12c = thunk_FUN_004036bc;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  if (param_1[1] == 0) {
    FUN_00402ee4(*param_1,local_118);
    FUN_00403e80(param_2,local_118);
  }
  else {
    pcStack_128 = (code *)&stack0xfffffffc;
    FUN_00403178((int *)param_1[1],&local_18,0);
    local_14 = local_18;
    local_10 = 0xb;
    local_c = FUN_00410bd0((int)param_1);
    local_8 = 0;
    FUN_00409254((byte *)"%s[%d]",&local_14,1,param_2);
  }
  *in_FS_OFFSET = uStack_130;
  pcStack_128 = FUN_00410cac;
  pcStack_12c = (code *)0x410ca4;
  FUN_00403c5c(&local_18);
  return;
}


