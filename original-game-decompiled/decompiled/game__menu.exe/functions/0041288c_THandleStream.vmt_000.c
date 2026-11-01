
/* ==== THandleStream.vmt_000 @ 0041288c ==== 
 * signature: undefined __register THandleStream.vmt_000(int * param_1, undefined4 param_2)
 * body: 0041288c-004128a9
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void THandleStream_vmt_000(int *param_1,undefined4 param_2)

{
  BOOL BVar1;
  
  (**(code **)(*param_1 + 0xc))(param_1,param_2,0);
  BVar1 = SetEndOfFile((HANDLE)param_1[1]);
  FUN_0040c76c(BVar1);
  return;
}


