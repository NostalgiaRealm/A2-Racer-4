
/* ==== FUN_0041b6f8 @ 0041b6f8 ==== 
 * signature: int __register FUN_0041b6f8(int * param_1)
 * body: 0041b6f8-0041b736
 */

int FUN_0041b6f8(int *param_1)

{
  int *piVar1;
  
  if (param_1[9] == 0) {
    FUN_0041b8b0((int)param_1);
    piVar1 = FUN_0041a4f8((int *)&PTR_TPersistent_vmt_000_0041a380,'\x01',(int)param_1);
    param_1[9] = (int)piVar1;
    piVar1[0xb] = (int)param_1;
    piVar1[10] = *(int *)(*param_1 + 0x10);
    piVar1[0xd] = (int)param_1;
    piVar1[0xc] = (int)FUN_0041b3e0;
  }
  return param_1[9];
}


