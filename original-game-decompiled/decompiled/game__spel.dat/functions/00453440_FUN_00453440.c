
/* ==== FUN_00453440 @ 00453440 ==== 
 * signature: undefined __stdcall FUN_00453440(void)
 * body: 00453440-00453470
 */

void FUN_00453440(void)

{
  int *piVar1;
  
  piVar1 = &DAT_005a2a60;
  do {
    FUN_004a6bb0(*piVar1,piVar1[1]);
    piVar1 = piVar1 + 2;
  } while ((int)piVar1 < 0x5a2b50);
  FUN_004556e0();
  FUN_004559d0();
  FUN_004550c0();
  return;
}


