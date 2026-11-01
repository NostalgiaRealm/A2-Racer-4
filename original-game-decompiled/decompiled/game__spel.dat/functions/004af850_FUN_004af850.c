
/* ==== FUN_004af850 @ 004af850 ==== 
 * signature: undefined __stdcall FUN_004af850(void)
 * body: 004af850-004af873
 */

void FUN_004af850(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = &DAT_00715fe8;
  iVar2 = 200;
  do {
    FUN_00402d00(puVar1,0xc,4,FUN_0043e110);
    puVar1 = puVar1 + 0x4c;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


