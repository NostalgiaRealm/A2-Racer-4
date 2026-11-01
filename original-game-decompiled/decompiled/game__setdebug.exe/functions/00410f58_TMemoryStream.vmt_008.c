
/* ==== TMemoryStream.vmt_008 @ 00410f58 ==== 
 * signature: undefined TMemoryStream.vmt_008(void)
 * body: 00410f58-00410fa7
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

uint TMemoryStream_vmt_008(int *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  
  if (((param_1[3] < 0) || ((int)param_3 < 0)) || (iVar1 = param_1[3] + param_3, iVar1 < 1)) {
    param_3 = 0;
  }
  else {
    if (param_1[2] < iVar1) {
      if (param_1[4] < iVar1) {
        FUN_00410e80(param_1,iVar1);
      }
      param_1[2] = iVar1;
    }
    FUN_004027d0(param_2,(undefined4 *)(param_1[1] + param_1[3]),param_3);
    param_1[3] = iVar1;
  }
  return param_3;
}


