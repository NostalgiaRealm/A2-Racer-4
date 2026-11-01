
/* ==== FUN_004ada43 @ 004ada43 ==== 
 * signature: undefined4 __stdcall FUN_004ada43(void)
 * body: 004ada43-004ada62
 */

undefined4 FUN_004ada43(void)

{
  undefined4 uVar1;
  int unaff_EBX;
  int unaff_EBP;
  void *unaff_EDI;
  undefined4 uStack0000001c;
  
  uStack0000001c = *(undefined4 *)(unaff_EBX + 0x934 + unaff_EBP * 4);
  uVar1 = FUN_004af7c0(unaff_EDI,uStack0000001c);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


