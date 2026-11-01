
/* ==== FUN_0041c0a2 @ 0041c0a2 ==== 
 * signature: undefined __fastcall FUN_0041c0a2(int param_1)
 * body: 0041c0a2-0041c0a3
 */

void __fastcall FUN_0041c0a2(int param_1)

{
  char *pcVar1;
  int in_EAX;
  int iVar2;
  int *unaff_EDI;
  
  *unaff_EDI = in_EAX;
  iVar2 = param_1 + 1;
  iVar2 = CONCAT22((short)((uint)iVar2 >> 0x10),
                   CONCAT11((char)((uint)iVar2 >> 8) * '\x02',(char)iVar2));
  *(char *)(unaff_EDI + 1) = (char)unaff_EDI[1] + (char)((uint)(iVar2 + 1) >> 8);
  cRambe0e4200 = cRambe0e4200 + (char)((uint)in_EAX >> 8);
  pcVar1 = (char *)(in_EAX * 9 + -0x6f6fffbf);
  *pcVar1 = *pcVar1 + (char)in_EAX;
  FUN_00450870();
  FUN_004508a0();
  *(undefined4 *)(iVar2 + 0x1db) = 0;
  *(undefined4 *)(iVar2 + 0x1df) = 0;
  return;
}


