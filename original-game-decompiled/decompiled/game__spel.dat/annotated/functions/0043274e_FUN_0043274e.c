
/* ==== FUN_0043274e @ 0043274e ==== 
 * signature: undefined __fastcall FUN_0043274e(undefined4 param_1, undefined4 param_2)
 * body: 0043274e-0043274f
 */

void __fastcall FUN_0043274e(undefined4 param_1,undefined4 param_2)

{
  int unaff_EBX;
  
  *(char *)(unaff_EBX + -0x32ffbcd9) = *(char *)(unaff_EBX + -0x32ffbcd9) + (char)unaff_EBX + '\x01'
  ;
                    /* WARNING: Could not recover jumptable at 0x00432764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(CONCAT22((short)((uint)param_2 >> 0x10),
                        CONCAT11((char)((uint)param_2 >> 8) + (char)((uint)(unaff_EBX + 2) >> 8),
                                 (char)param_2)) + 4))();
  return;
}


