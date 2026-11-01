
/* ==== FUN_00429c24 @ 00429c24 ==== 
 * signature: undefined FUN_00429c24(void)
 * body: 00429c24-00429c53
 */

undefined4 FUN_00429c24(uint param_1,int param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  uint *puVar3;
  char unaff_BL;
  char unaff_BH;
  
  param_1 = param_1 & 0xffffffc0;
  cVar2 = (char)(param_1 >> 8);
  *(char *)(param_1 + 0x840042c2) = *(char *)(param_1 + 0x840042c2) + cVar2;
  *(char *)(param_1 - 0x42) = *(char *)(param_1 - 0x42) + unaff_BL;
  *(char *)(param_1 + 0xa40042bf) = *(char *)(param_1 + 0xa40042bf) + cVar2;
  pcVar1 = (char *)(param_3 + -0x3f43ffbe + param_1 * 8);
  *pcVar1 = *pcVar1 + (char)((uint)(param_2 + 4) >> 8);
  puVar3 = (uint *)(param_2 + 5);
  *puVar3 = *puVar3 << 0x18 | *puVar3 >> 8;
  return CONCAT31((int3)(param_1 >> 8),(char)param_1 + unaff_BH);
}


