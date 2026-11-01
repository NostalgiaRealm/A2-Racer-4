
/* ==== FUN_004dd270 @ 004dd270 ==== 
 * signature: undefined4 * __fastcall FUN_004dd270(undefined4 * param_1)
 * body: 004dd270-004dd27f
 */

undefined4 * __fastcall FUN_004dd270(undefined4 *param_1)

{
  byte unaff_retaddr;
  
  *param_1 = &PTR_FUN_00577ad0;
  if ((unaff_retaddr & 1) != 0) {
    FUN_0054b339(param_1);
  }
  return param_1;
}


