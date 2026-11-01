
/* ==== THandleStream.vmt_000 @ 00410cd8 ==== 
 * signature: undefined __register THandleStream.vmt_000(int * param_1, undefined4 param_2)
 * body: 00410cd8-00410cf5
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void THandleStream_vmt_000(int *param_1,undefined4 param_2)

{
  BOOL BVar1;
  
  (**(code **)(*param_1 + 0xc))(param_1,param_2,0);
  BVar1 = SetEndOfFile((HANDLE)param_1[1]);
  FUN_0040ba7c(BVar1);
  return;
}


