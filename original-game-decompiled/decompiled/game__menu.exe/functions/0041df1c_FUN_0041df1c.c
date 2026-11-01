
/* ==== FUN_0041df1c @ 0041df1c ==== 
 * signature: int __register FUN_0041df1c(int * param_1)
 * body: 0041df1c-0041df5a
 */

int FUN_0041df1c(int *param_1)

{
  int *piVar1;
  
  if (param_1[9] == 0) {
    FUN_0041e0d4((int)param_1);
    piVar1 = FUN_0041cd1c((int *)&PTR_TPersistent_vmt_000_0041cba4,'\x01',(int)param_1);
    param_1[9] = (int)piVar1;
    piVar1[0xb] = (int)param_1;
    piVar1[10] = *(int *)(*param_1 + 0x10);
    piVar1[0xd] = (int)param_1;
    piVar1[0xc] = (int)FUN_0041dc04;
  }
  return param_1[9];
}


