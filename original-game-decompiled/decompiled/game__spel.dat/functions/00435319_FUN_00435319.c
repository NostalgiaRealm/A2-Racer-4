
/* ==== FUN_00435319 @ 00435319 ==== 
 * signature: undefined __fastcall FUN_00435319(char * param_1, undefined4 param_2)
 * body: 00435319-0043531b
 */

void __fastcall FUN_00435319(char *param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  uint *puVar1;
  char *pcVar2;
  int unaff_EBX;
  bool in_ZF;
  
  if (!in_ZF) {
    *(char *)(unaff_EBX + 0x53) = *(char *)(unaff_EBX + 0x53) + (char)((uint)(unaff_EBX + 1) >> 8);
    puVar1 = (uint *)CONCAT22((short)((uint)in_EAX >> 0x10),
                              CONCAT11((char)((uint)in_EAX >> 8) + (char)((uint)param_2 >> 8),
                                       (char)in_EAX));
    *param_1 = *param_1 + (char)param_1;
    *(char *)(puVar1 + -0x5dbdbdc) = (char)puVar1[-0x5dbdbdc] + (char)param_2;
    pcVar2 = (char *)((uint)puVar1 | *puVar1);
    *pcVar2 = *pcVar2 + (char)pcVar2;
    FUN_00435350();
    return;
  }
  FUN_00435380();
  FUN_00435390();
  return;
}


