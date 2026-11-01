
/* ==== FUN_0047ab5d @ 0047ab5d ==== 
 * signature: undefined __fastcall FUN_0047ab5d(char * param_1, char * param_2)
 * body: 0047ab5d-0047ab5f
 */

void __fastcall FUN_0047ab5d(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  undefined4 in_EAX;
  char unaff_BL;
  int unaff_EBP;
  undefined1 *unaff_ESI;
  undefined1 *unaff_EDI;
  
  *unaff_EDI = *unaff_ESI;
  cVar2 = (char)in_EAX;
  *param_1 = *param_1 + unaff_BL;
  *(undefined4 *)(unaff_EDI + 4) = *(undefined4 *)(unaff_ESI + 1);
  unaff_EDI[-0x34ffb851] = unaff_EDI[-0x34ffb851] + unaff_BL;
  cVar3 = (char)((uint)in_EAX >> 8);
  *(char *)(unaff_EBP + -0x59) = *(char *)(unaff_EBP + -0x59) + cVar3;
  *param_2 = *param_2 + cVar2;
  unaff_EDI[0x5c0047b7] = unaff_EDI[0x5c0047b7] + unaff_BL;
  pcVar1 = (char *)(CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(cVar3 + cVar2,cVar2)) + -0x56);
  *pcVar1 = *pcVar1 + unaff_BL;
  unaff_EDI[-0x6fffb843] = unaff_EDI[-0x6fffb843] + unaff_BL;
  if ((DAT_00750060 & 1) == 0) {
    DAT_00750060 = DAT_00750060 | 1;
  }
  FUN_005584e0(0x4d1400);
  return;
}


