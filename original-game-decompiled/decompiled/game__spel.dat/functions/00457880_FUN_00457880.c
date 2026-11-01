
/* ==== FUN_00457880 @ 00457880 ==== 
 * signature: undefined __cdecl FUN_00457880(int param_1)
 * body: 00457880-004578e6
 */

void __cdecl FUN_00457880(int param_1)

{
  if ((DAT_005a3ab0 < DAT_006fba64) &&
     (*(int *)(param_1 * 0xf0 + 0x38 + DAT_00715e50) <
      *(int *)(param_1 * 0xf0 + DAT_00715e50 + 0x34))) {
    FUN_00450330(0x32);
    DAT_0059becc = 0x43;
    FUN_00450950(s_FLITS_005a3ed4,0);
    FUN_0043c120(0,FUN_0043b0b0,FUN_0043b130,FUN_0043b0f0);
  }
  return;
}


