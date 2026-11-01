
/* ==== FUN_0040b0c0 @ 0040b0c0 ==== 
 * signature: undefined __register FUN_0040b0c0(void)
 * body: 0040b0c0-0040b156
 */

void FUN_0040b0c0(void)

{
  LCID LVar1;
  CALID Calendar;
  undefined4 *puVar2;
  int extraout_ECX;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  CALID Calendar_00;
  byte **ppbVar4;
  CALTYPE CVar5;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  byte *local_8;
  
  pcStack_10 = (code *)&stack0xfffffffc;
  local_8 = (byte *)0x0;
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  ppbVar4 = &local_8;
  LVar1 = GetThreadLocale();
  FUN_0040ae38(LVar1,0x100b,(undefined4 *)&DAT_0040b16c,(int *)ppbVar4);
  Calendar = FUN_00408654(local_8,1,extraout_ECX);
  if (Calendar - 3 < 3) {
    CVar5 = 4;
    Calendar_00 = Calendar;
    LVar1 = GetThreadLocale();
    EnumCalendarInfoA(FUN_0040b00c,LVar1,Calendar_00,CVar5);
    iVar3 = 7;
    puVar2 = &DAT_004ac5dc;
    do {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    CVar5 = 3;
    LVar1 = GetThreadLocale();
    EnumCalendarInfoA(FUN_0040b048,LVar1,Calendar,CVar5);
  }
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0040b15e;
  pcStack_14 = (code *)0x40b156;
  FUN_00403c5c((int *)&local_8);
  return;
}


