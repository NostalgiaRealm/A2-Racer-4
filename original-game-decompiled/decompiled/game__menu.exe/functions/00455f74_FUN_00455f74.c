
/* ==== FUN_00455f74 @ 00455f74 ==== 
 * signature: int * __register FUN_00455f74(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 00455f74-00455fa1
 */

int * FUN_00455f74(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_004ac8e8 == (int *)0x0) {
    DAT_004ac8e8 = FUN_004550a4((int *)&PTR_TDIBSharedImage_vmt_000_00454a44,'\x01',param_3);
    FUN_0041cf10((int)DAT_004ac8e8);
  }
  return DAT_004ac8e8;
}


