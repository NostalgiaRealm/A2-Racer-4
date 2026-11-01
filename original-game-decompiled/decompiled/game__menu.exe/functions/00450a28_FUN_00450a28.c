
/* ==== FUN_00450a28 @ 00450a28 ==== 
 * signature: undefined FUN_00450a28(void)
 * body: 00450a28-00450a37
 */

void FUN_00450a28(char *param_1,undefined4 param_2,char param_3)

{
  int unaff_EBX;
  
  *param_1 = *param_1 + (char)param_1;
  param_1[0x20790] = param_1[0x20790] + param_3;
  *(char *)(unaff_EBX + 0x7452ff10) = *(char *)(unaff_EBX + 0x7452ff10) + param_3;
  return;
}


