
/* ==== FUN_0045333a @ 0045333a ==== 
 * signature: undefined __fastcall FUN_0045333a(byte param_1, char param_2)
 * body: 0045333a-0045333b
 */

void __fastcall FUN_0045333a(byte param_1,char param_2)

{
  char *pcVar1;
  undefined4 in_EAX;
  int unaff_EBP;
  
  pcVar1 = (char *)(CONCAT31((int3)(CONCAT22((short)((uint)in_EAX >> 0x10),
                                             CONCAT11((char)((uint)in_EAX >> 8) + param_2,
                                                      (byte)in_EAX)) >> 8),
                             ((byte)in_EAX ^ *(byte *)(unaff_EBP + 1) ^ *(byte *)(unaff_EBP + 1)) +
                             0x33) + -0x756f6f70);
  *pcVar1 = *pcVar1 + param_2;
  if ((param_1 & 1) == 0) {
    DAT_00750060 = param_1 | 1;
  }
  FUN_005584e0(0x4d1400);
  return;
}


