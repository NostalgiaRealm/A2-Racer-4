
/* ==== FUN_004e53b0 @ 004e53b0 ==== 
 * signature: undefined __stdcall FUN_004e53b0(void)
 * body: 004e53b0-004e53d9
 */

void FUN_004e53b0(void)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  if ((in_EAX == 0) || (unaff_ESI == 0)) {
    unaff_EBX = 0;
  }
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  puVar1[2] = 2;
  puVar1[4] = unaff_EBX;
  *puVar1 = &PTR_FUN_005778c0;
  FUN_004e5203();
  return;
}


