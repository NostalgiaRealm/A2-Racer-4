
/* ==== FUN_1000e07e @ 1000e07e ==== 
 * signature: undefined __stdcall FUN_1000e07e(void)
 * body: 1000e07e-1000e07f
 */

void FUN_1000e07e(void)

{
  byte *pbVar1;
  byte bVar2;
  int in_EAX;
  byte unaff_BL;
  char unaff_BH;
  int unaff_ESI;
  byte in_CF;
  byte bVar3;
  
  pbVar1 = (byte *)(in_EAX + -0x57efff20);
  bVar2 = *pbVar1;
  bVar3 = *pbVar1;
  *pbVar1 = bVar3 + unaff_BL + in_CF;
  *(char *)(in_EAX + 0x458b1000) =
       *(char *)(in_EAX + 0x458b1000) + unaff_BH +
       (CARRY1(bVar2,unaff_BL) || CARRY1(bVar3 + unaff_BL,in_CF));
  *(byte *)(unaff_ESI + 0x5f) = *(byte *)(unaff_ESI + 0x5f) | unaff_BL;
  return;
}


