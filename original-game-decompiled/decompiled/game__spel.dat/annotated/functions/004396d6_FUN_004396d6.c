
/* ==== FUN_004396d6 @ 004396d6 ==== 
 * signature: undefined __fastcall FUN_004396d6(char * param_1, int param_2)
 * body: 004396d6-004396d7
 */

/* WARNING: Unable to track spacebase fully for stack */

void __fastcall FUN_004396d6(char *param_1,int param_2)

{
  char in_AL;
  char cVar1;
  char cVar2;
  char cVar3;
  int unaff_EBX;
  int unaff_EBP;
  char *unaff_ESI;
  int unaff_EDI;
  char in_CF;
  
  cVar3 = (char)((uint)param_1 >> 8);
  *param_1 = *param_1 + cVar3;
  unaff_ESI[-0x6d] = unaff_ESI[-0x6d] + (char)param_1;
  *(char *)(param_2 + -0x6d) = *(char *)(param_2 + -0x6d) + (char)((uint)(unaff_EBX + 3) >> 8);
  *param_1 = *param_1 + (char)((uint)(unaff_EBX + 4) >> 8);
  cVar1 = (char)((uint)&stack0x00000000 >> 8);
  *unaff_ESI = *unaff_ESI + cVar1;
  cVar2 = (char)((uint)unaff_EBP >> 8);
  *unaff_ESI = *unaff_ESI + cVar2;
  *unaff_ESI = *unaff_ESI + cVar1;
  *(char *)(unaff_EBX + -99) = *(char *)(unaff_EBX + -99) + cVar3;
  *unaff_ESI = *unaff_ESI + cVar2;
  *(char *)(unaff_EBP + -0x6b) = *(char *)(unaff_EBP + -0x6b) + (char)((uint)(unaff_EBX + 10) >> 8);
  *(char *)(unaff_EBX + -0x60) = *(char *)(unaff_EBX + -0x60) + cVar3;
  *(char *)(unaff_EDI + 0x63004395) = *(char *)(unaff_EDI + 0x63004395) + (char)param_1;
  unaff_ESI[-0x6f6f6f70] = unaff_ESI[-0x6f6f6f70] + ((in_AL + 'o') - in_CF);
  if ((DAT_00750060 & 1) == 0) {
    DAT_00750060 = DAT_00750060 | 1;
  }
  *(code **)(param_2 + -4) = FUN_004d1400;
  *(undefined4 *)(param_2 + -8) = 0x43974a;
  FUN_005584e0(*(int *)(param_2 + -4));
  return;
}


