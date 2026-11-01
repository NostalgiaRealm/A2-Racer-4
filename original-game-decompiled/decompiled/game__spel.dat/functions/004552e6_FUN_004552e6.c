
/* ==== FUN_004552e6 @ 004552e6 ==== 
 * signature: undefined __fastcall FUN_004552e6(int param_1, char param_2)
 * body: 004552e6-004552e7
 */

void __fastcall FUN_004552e6(int param_1,char param_2)

{
  int in_EAX;
  char unaff_BL;
  char unaff_BH;
  
  *(char *)(param_1 + 0x52) = *(char *)(param_1 + 0x52) + unaff_BH;
  *(char *)(in_EAX + -0x44ffbaae) = *(char *)(in_EAX + -0x44ffbaae) + unaff_BL;
  *(char *)(in_EAX + -0x6f6f6f70) = *(char *)(in_EAX + -0x6f6f6f70) + param_2;
  if ((DAT_00750060 & 1) == 0) {
    DAT_00750060 = DAT_00750060 | 1;
  }
  FUN_005584e0(0x4d1400);
  return;
}


