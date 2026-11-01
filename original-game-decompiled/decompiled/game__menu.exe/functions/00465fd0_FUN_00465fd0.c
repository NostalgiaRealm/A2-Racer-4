
/* ==== FUN_00465fd0 @ 00465fd0 ==== 
 * signature: int __register FUN_00465fd0(int * param_1)
 * body: 00465fd0-00465ffb
 */

int FUN_00465fd0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x80] == 0) {
    iVar1 = TGDIHint_vmt_02c((int *)&PTR_TControl_vmt_000_00465d00,'\x01',param_1);
    param_1[0x80] = iVar1;
  }
  return param_1[0x80];
}


