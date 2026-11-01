
/* ==== FUN_004d6cc0 @ 004d6cc0 ==== 
 * signature: undefined __stdcall FUN_004d6cc0(void)
 * body: 004d6cc0-004d6d22
 */

void FUN_004d6cc0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = DAT_0074b8b4;
  piVar2 = (int *)*DAT_0074b8b4;
  while (piVar2 != piVar3) {
    piVar1 = (int *)*piVar2;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    FUN_00479480((int)(piVar2 + 2));
    FUN_0054b339(piVar2);
    DAT_0074b8b8 = DAT_0074b8b8 + -1;
    piVar2 = piVar1;
  }
  FUN_0054b339(DAT_0074b8b4);
  DAT_0074b8b4 = (int *)0x0;
  DAT_0074b8b8 = 0;
  return;
}


