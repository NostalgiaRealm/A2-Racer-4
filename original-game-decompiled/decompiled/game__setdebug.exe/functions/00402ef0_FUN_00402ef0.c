
/* ==== FUN_00402ef0 @ 00402ef0 ==== 
 * signature: undefined __register FUN_00402ef0(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00402ef0-00402f04
 */

void FUN_00402ef0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 in_ZF;
  
  FUN_00402ec0(*param_1);
  if (!(bool)in_ZF) {
                    /* WARNING: Could not recover jumptable at 0x00402efd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return;
  }
  TStrings_vmt_00c();
  return;
}


