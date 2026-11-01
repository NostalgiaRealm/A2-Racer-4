
/* ==== THandleStream.vmt_004 @ 00412860 ==== 
 * signature: undefined THandleStream.vmt_004(void)
 * body: 00412860-0041286f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

DWORD THandleStream_vmt_004(int param_1,LPVOID param_2,DWORD param_3)

{
  DWORD DVar1;
  
  DVar1 = FUN_004086d0(*(HANDLE *)(param_1 + 4),param_2,param_3);
  if (DVar1 == 0xffffffff) {
    DVar1 = 0;
  }
  return DVar1;
}


