
/* ==== FUN_004e53da @ 004e53da ==== 
 * signature: undefined __stdcall FUN_004e53da(void)
 * body: 004e53da-004e53ff
 */

void FUN_004e53da(void)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 uVar2;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  if ((in_EAX != 0) || (uVar2 = 0, unaff_ESI != 0)) {
    uVar2 = unaff_EBX;
  }
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  puVar1[2] = 2;
  puVar1[4] = uVar2;
  *puVar1 = &PTR_FUN_005778c0;
  FUN_004e5203();
  return;
}


