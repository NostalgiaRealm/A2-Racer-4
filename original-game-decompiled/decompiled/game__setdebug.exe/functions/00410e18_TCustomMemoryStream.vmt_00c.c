
/* ==== TCustomMemoryStream.vmt_00c @ 00410e18 ==== 
 * signature: undefined TCustomMemoryStream.vmt_00c(void)
 * body: 00410e18-00410e3a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TCustomMemoryStream_vmt_00c(int param_1,int param_2,short param_3)

{
  if (param_3 == 0) {
    *(int *)(param_1 + 0xc) = param_2;
  }
  else if (param_3 == 1) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
  }
  else if (param_3 == 2) {
    *(int *)(param_1 + 0xc) = param_2 + *(int *)(param_1 + 8);
  }
  return *(undefined4 *)(param_1 + 0xc);
}


