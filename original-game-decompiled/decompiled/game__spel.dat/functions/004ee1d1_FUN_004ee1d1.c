
/* ==== FUN_004ee1d1 @ 004ee1d1 ==== 
 * signature: undefined __cdecl FUN_004ee1d1(undefined4 param_1, undefined4 param_2)
 * body: 004ee1d1-004ee1fa
 */

void __cdecl FUN_004ee1d1(undefined4 param_1,undefined4 param_2)

{
  undefined1 *in_EAX;
  int unaff_ESI;
  
  if (in_EAX != (undefined1 *)0x0) {
    *(undefined4 *)(in_EAX + 4) = 0;
    *in_EAX = param_2._3_1_;
    *(undefined4 *)(in_EAX + 8) = 0;
    *(undefined4 *)(in_EAX + 0xc) = 0;
    *(undefined1 **)(unaff_ESI + 4) = in_EAX;
    return;
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  return;
}


