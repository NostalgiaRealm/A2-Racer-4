
/* ==== FUN_004ce000 @ 004ce000 ==== 
 * signature: undefined __cdecl FUN_004ce000(undefined4 param_1)
 * body: 004ce000-004ce026
 */

void __cdecl FUN_004ce000(undefined4 param_1)

{
  if (DAT_00740ff4 != 0) {
    DAT_00740e78 = param_1;
    mixerSetControlDetails(DAT_00740ff0,(LPMIXERCONTROLDETAILS)&DAT_00740e80,0);
  }
  return;
}


