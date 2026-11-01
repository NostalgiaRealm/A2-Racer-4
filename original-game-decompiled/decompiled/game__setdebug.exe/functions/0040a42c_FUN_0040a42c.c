
/* ==== FUN_0040a42c @ 0040a42c ==== 
 * signature: undefined __register FUN_0040a42c(void)
 * body: 0040a42c-0040a4c2
 */

void FUN_0040a42c(void)

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
  pcStack_14 = thunk_FUN_00403434;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  ppbVar4 = &local_8;
  LVar1 = GetThreadLocale();
  FUN_0040a1a4(LVar1,0x100b,(undefined4 *)&DAT_0040a4d8,(int *)ppbVar4);
  Calendar = FUN_00407cdc(local_8,1,extraout_ECX);
  if (Calendar - 3 < 3) {
    CVar5 = 4;
    Calendar_00 = Calendar;
    LVar1 = GetThreadLocale();
    EnumCalendarInfoA(FUN_0040a378,LVar1,Calendar_00,CVar5);
    iVar3 = 7;
    puVar2 = &DAT_004475d4;
    do {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    CVar5 = 3;
    LVar1 = GetThreadLocale();
    EnumCalendarInfoA(FUN_0040a3b4,LVar1,Calendar,CVar5);
  }
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0040a4ca;
  pcStack_14 = (code *)0x40a4c2;
  FUN_004039b8((int *)&local_8);
  return;
}


