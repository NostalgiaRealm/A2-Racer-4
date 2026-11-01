
/* ==== FUN_0040c046 @ 0040c046 ==== 
 * signature: undefined __fastcall FUN_0040c046(uint param_1, char * param_2)
 * body: 0040c046-0040c047
 */

void __fastcall FUN_0040c046(uint param_1,char *param_2)

{
  int iVar1;
  char in_AL;
  byte bVar2;
  char *unaff_EBX;
  int unaff_EBP;
  int *piVar3;
  
  *param_2 = *param_2 + in_AL;
  bVar2 = (byte)param_1;
  piVar3 = (int *)CONCAT22((short)(param_1 >> 0x10),CONCAT11(0x40,bVar2));
  *unaff_EBX = *unaff_EBX + (char)param_2;
  *(char *)(unaff_EBP + -0x49ffbf43) = *(char *)(unaff_EBP + -0x49ffbf43) + bVar2;
  *piVar3 = *piVar3 + -0x4356ffbf;
  iVar1 = iRambca90041 + -0x4356ffbf;
  iRambca90041._0_1_ = (char)iVar1;
  iRambca90041 = CONCAT31((int3)((uint)iVar1 >> 8),(char)iRambca90041 + 'A');
  cRamca3390d1 = cRamca3390d1 + (char)param_2;
  cRam00000040 = cRam00000040 + (char)((uint)param_2 >> 8);
  if ((param_1 & 1) == 0) {
    DAT_00750060 = bVar2 | 1;
  }
  FUN_005584e0(0x4d1400);
  return;
}


