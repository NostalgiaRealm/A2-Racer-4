
/* ==== FUN_00403178 @ 00403178 ==== 
 * signature: undefined __register FUN_00403178(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00403178-0040318c
 */

void FUN_00403178(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 in_ZF;
  
  FUN_00403148(*param_1);
  if (!(bool)in_ZF) {
                    /* WARNING: Could not recover jumptable at 0x00403185. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return;
  }
  TStrings_vmt_00c();
  return;
}


