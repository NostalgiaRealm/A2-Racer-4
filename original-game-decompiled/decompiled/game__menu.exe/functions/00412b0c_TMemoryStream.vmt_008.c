
/* ==== TMemoryStream.vmt_008 @ 00412b0c ==== 
 * signature: undefined TMemoryStream.vmt_008(void)
 * body: 00412b0c-00412b5b
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
        FUN_00412a34(param_1,iVar1);
      }
      param_1[2] = iVar1;
    }
    FUN_004028d8(param_2,(undefined4 *)(param_1[1] + param_1[3]),param_3);
    param_1[3] = iVar1;
  }
  return param_3;
}


