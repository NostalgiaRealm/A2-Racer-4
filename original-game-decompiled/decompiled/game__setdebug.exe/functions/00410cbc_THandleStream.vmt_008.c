
/* ==== THandleStream.vmt_008 @ 00410cbc ==== 
 * signature: undefined THandleStream.vmt_008(void)
 * body: 00410cbc-00410ccb
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

DWORD THandleStream_vmt_008(int param_1,LPCVOID param_2,DWORD param_3)

{
  DWORD DVar1;
  
  DVar1 = FUN_00407d84(*(HANDLE *)(param_1 + 4),param_2,param_3);
  if (DVar1 == 0xffffffff) {
    DVar1 = 0;
  }
  return DVar1;
}


