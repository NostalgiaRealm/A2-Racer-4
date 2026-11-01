
/* ==== FUN_004cdfd0 @ 004cdfd0 ==== 
 * signature: undefined4 __stdcall FUN_004cdfd0(void)
 * body: 004cdfd0-004cdff5
 */

undefined4 FUN_004cdfd0(void)

{
  if (DAT_00740ff4 != 0) {
    mixerGetControlDetailsA(DAT_00740ff0,(LPMIXERCONTROLDETAILS)&DAT_00740e80,0);
    return DAT_00740e78;
  }
  return 0xffffffff;
}


