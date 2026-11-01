
/* ==== FUN_00457820 @ 00457820 ==== 
 * signature: undefined __stdcall FUN_00457820(void)
 * body: 00457820-00457857
 */

void FUN_00457820(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_005a3ab8;
  do {
    FUN_004a6c40(iVar2,*puVar1);
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)puVar1 < 0x5a3bcc);
  FUN_00456d20();
  FUN_00457900();
  return;
}


