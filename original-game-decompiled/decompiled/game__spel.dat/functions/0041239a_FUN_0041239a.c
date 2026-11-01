
/* ==== FUN_0041239a @ 0041239a ==== 
 * signature: undefined __fastcall FUN_0041239a(uint * param_1, undefined2 param_2)
 * body: 0041239a-0041239b
 */

void __fastcall FUN_0041239a(uint *param_1,undefined2 param_2)

{
  uint in_EAX;
  int unaff_EBP;
  undefined1 *unaff_ESI;
  int unaff_EDI;
  
  out(*unaff_ESI,param_2);
  if ((int)(in_EAX & *param_1 & *param_1) < 0) {
    *(char *)(unaff_EDI + -0x73ffbedd) = *(char *)(unaff_EDI + -0x73ffbedd) + (char)param_2;
  }
  if (((0xd < unaff_EBP) && (unaff_EBP < 0x10)) && ((&DAT_006fa58c)[DAT_006fb898 * 0x25] == 0)) {
    (&DAT_005ce9ec)[(int)unaff_ESI * 0xa5] = 9;
  }
  return;
}


